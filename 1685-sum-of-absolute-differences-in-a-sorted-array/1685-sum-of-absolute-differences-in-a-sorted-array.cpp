class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);
        vector<int> prefix ;
        int running_sum = 0;
        for(auto i = 0 ; i < n ; ++i){
            running_sum += nums[i];
            prefix.push_back(running_sum);
        }
        for(auto i = 0 ; i < n ; ++i){
            int leftSum = abs(prefix[i] - (i+1) * nums[i]);
            int rightSum = running_sum - prefix[i] - nums[i] * (n - i -1);
            result[i] = leftSum + rightSum;
        }
        return result;
    }
};