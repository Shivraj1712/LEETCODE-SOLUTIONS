class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans (nums.size()* 2, 0);
        for(auto i = 0 ; i < nums.size(); ++i){
            ans[i] = nums[i];
            ans[i+nums.size()] = nums[i];
        }
        return ans;
    }
};