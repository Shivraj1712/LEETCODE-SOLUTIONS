class Solution {
public:
    string encode(string s){
        int sq = 0 ;
        unordered_map<char,int> values;
        for(auto i : s){
            if(values.find(1) == values.end()) {
                values[i] = sq;
                sq++;
            }
        }
        string t = "";
        char temp = s[0];
        int count = 1 ;
        for(auto i = 1 ; i < s.size(); ++i){
            if(s[i] == temp){
                count++;
            }else{
                string x = to_string(values[temp]);
                t += x;
                count = 1 ;
                temp = s[i];
            }
        }
        string x = to_string(count);
        t += x;
        return t;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string validPattern = encode(pattern);
        vector<string> temp,ans;
        for(auto i : words){
            string value = encode(i);
            if(value == validPattern){
                ans.push_back(i);
            }
        }
        return ans;
    }
};