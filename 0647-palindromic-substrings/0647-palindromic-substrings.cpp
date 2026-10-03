class Solution {
public:
    bool isPalindrome(string s){
        int start = 0 , end = s.size() - 1;
        while(start <= end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count = 0 ;
        for(auto i = 0 ; i < s.size(); ++i){
            string temp = "";
            for(auto j = i ; j < s.size(); ++j){
                temp += s[j];
                count += isPalindrome(temp) ? 1 : 0 ;
            }
        }
        return count;
    }
};