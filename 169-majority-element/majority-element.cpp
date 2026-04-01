class Solution {
public:
    int majorityElement(vector<int>& nums) {
unordered_map<int,int> count;
        int n = nums.size() ;

        for( int  it : nums){
            count[it]++;
        
        if ( count[it] > n/2){
            return it ;
        }
        }

        
            return -1;
        
    }
};