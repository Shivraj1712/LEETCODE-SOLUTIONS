class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq;
        for(auto i : s) freq[i]++;
        string temp = "";
        for(auto i : order){
            if(freq.find(i) != freq.end()){
                for(auto j = 0 ; j < freq[i]; ++j){
                    temp += i;
                }
                freq.erase(i);
            }
        }
        for(auto &[ch,count] : freq){
            for(auto i = 0 ; i < count ; ++i){
                temp += ch;
            }
        }
        return temp;
    }
};