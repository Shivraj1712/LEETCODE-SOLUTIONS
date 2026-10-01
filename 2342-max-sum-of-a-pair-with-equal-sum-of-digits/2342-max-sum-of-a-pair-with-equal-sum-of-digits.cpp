class Solution {
public:
    int getDigitSum(int x){
        int num = 0;
        while(x > 0){
            num += x % 10 ;
            x /= 10;
        }
        return num;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> m;
        for(auto i : nums){
            int sum = getDigitSum(i);
            m[sum].push_back(i);
        }
        int var = 0;
        vector<int> temp;
        for(auto &[sum,arr] : m){
            if(arr.size() >= 2){
                sort(arr.begin(),arr.end());
                var = max(var,arr[arr.size()-1]+arr[arr.size()-2]);
            }
        }
        return var == 0 ? -1 : var;
    }
};