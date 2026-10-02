class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0 ;
        for(auto i = 0 ; i < nums.size(); ++i){
            for(auto j = i + 1 ; j < nums.size(); ++j){
                int value = i * j ;
                if(nums[i] == nums[j] && value % k == 0) count++;
            }
        }
        return count;
    }
};