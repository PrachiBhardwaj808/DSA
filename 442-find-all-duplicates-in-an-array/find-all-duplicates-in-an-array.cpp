class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //Sorting elements
        sort( nums.begin() , nums.end());


//declaring new array 
        vector<int> duplicate;
        for( int i = 1 ; i< nums.size() ; i++){
            if( nums[i] == nums[i-1]){
                if( duplicate.empty() || duplicate.back() != nums[i] ){
                duplicate.push_back(nums[i]);}
            }

        }

        return duplicate ;


    }
};