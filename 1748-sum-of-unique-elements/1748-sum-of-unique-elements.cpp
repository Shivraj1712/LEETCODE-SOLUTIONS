class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums) mp[i]++;
        int sum = 0;
        for(auto &[num,count] : mp){
            sum += (count == 1) ? num : 0 ;
        }
        return sum;
    }
};