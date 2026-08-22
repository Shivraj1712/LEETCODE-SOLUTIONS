class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length = 0 , curr = 0;
        for(auto i : nums){
            if(i == 1){
                curr++;
            }else{
                length = max(curr,length);
                curr = 0;
            }
        }
        return max(curr,length);
    }
};