// TC - O(n)
// SC - O(n)
using ll = long long;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        ll running_sum = 0 ;
        for(auto i = 0 ; i < nums.size(); ++i){
            running_sum += nums[i];
            arr[i] = running_sum;
        }
        return arr;
    }
};