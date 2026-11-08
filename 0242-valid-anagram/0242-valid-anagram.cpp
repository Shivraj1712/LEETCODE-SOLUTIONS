// TC - O(nlogn) or O(n)
// need to check if frequencies of characters are equal for both of the strings
class Solution {
public:
    bool isAnagram(string s, string t) {
        array<int,26>f1{},f2{};
        for(char i : s) f1[i-'a']++;
        for(char i : t) f2[i-'a']++;
        return f1 == f2;
    }
};