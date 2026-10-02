class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0;
        long long sum = 0 ;
        for(auto i = 0 ; i < nums.size() ; ++i){
            sum += nums[i];
            int target = ((sum % k) + k) % k ;
            if(mp.find(target) != mp.end()){
                count += mp[target];
            }
            mp[target]++;
        }
        return count;
    }
};