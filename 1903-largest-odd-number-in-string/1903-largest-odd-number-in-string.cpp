class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size() > 0){
            if((num.back() - '0') % 2 != 0){
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};