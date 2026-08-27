class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n+1,0),s(n+1,0);
        for(auto i = 0 ; i < n ; ++i){
            p[i+1] = p[i] + nums[i];
        }
        for(auto i = n - 1; i >= 0 ; --i){
            s[i] = s[i+1] + nums[i];
        }
        for(auto i = 0 ; i < n ; i++){
            if(p[i] == s[i+1]) return i ;
        }
        return -1;
    }
};