class Solution {
public:
    bool isOdd(int n){
        return n % 2 != 0 ;
    }
    bool isEven(int n){
        return n % 2 == 0;
    }
    bool isArraySpecial(vector<int>& nums) {
        for(auto i = 1 ; i < nums.size(); i++){
            if(isEven(nums[i]) && isEven(nums[i-1])) return false;
            else if(isOdd(nums[i]) && isOdd(nums[i-1])) return false;
        }
        return true;
    }
};