class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size()+1);
        for(auto i = 0 ; i < nums.size(); ++i){
            prefix[i+1] = prefix[i] + nums[i];
        }
        for(auto i = 0 ; i < nums.size(); ++i){
            int left(prefix[i]), right(prefix[nums.size()]-prefix[i+1]);
            if(left == right) return i ;
        }
        return -1;
    }
};