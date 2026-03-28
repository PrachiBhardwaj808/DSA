class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        int n = lcp.size();
        string s(n, '?');

        char x = 'a';

  
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                if (x > 'z') return ""; 

                for (int j = i; j < n; j++) {
                    if (lcp[i][j] > 0) {
                        s[j] = x;
                    }
                }
                x++;
            }
        }

        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (s[i] == s[j]) {
                    if (i + 1 < n && j + 1 < n)
                        mat[i][j] = 1 + mat[i + 1][j + 1];
                    else
                        mat[i][j] = 1;
                }
            }
        }

        if (mat != lcp) return "";

        return s;
    }
};