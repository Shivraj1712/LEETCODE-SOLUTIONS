class Solution {
public:
    int rev(int x){
        long long rev = 0 ;
        while (x > 0){
            rev = rev * 10 + x % 10 ;
            x/=10;
        }
        return (int) rev;
    }
    int countNicePairs(vector<int>& nums) {
        long long count = 0 ;
        unordered_map<int,int> s;
        s[nums[0] - rev(nums[0])]++;
        for(auto i = 1 ; i < nums.size(); ++i){
            int target = nums[i] - rev(nums[i]);
            if(s.find(target) != s.end()) count+= s[target];
            s[target]++;
        }
        count = count % 1000000007;
        return count ;
    }
};