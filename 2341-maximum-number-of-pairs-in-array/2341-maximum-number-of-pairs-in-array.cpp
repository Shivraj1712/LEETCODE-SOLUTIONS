class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        int pairs = 0 , leftOver = 0;
        for(auto &[num,count]:freq){
            pairs += count / 2 ;
            leftOver += (count % 2 != 0) ? count % 2 : 0;
        }
        return {pairs,leftOver};
    }
};