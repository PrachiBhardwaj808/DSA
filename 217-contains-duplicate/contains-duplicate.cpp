class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
// Sorted the array
        sort( nums.begin() , nums.end());

        // check the duplicate

        for ( int i = 1 ; i < nums.size() ; i++){
            if( nums[i] == nums[i - 1]){
                return true ;
            }
        }

        return false ;
        
    }
};