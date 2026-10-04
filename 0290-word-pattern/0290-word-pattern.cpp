class Solution {
public:
    string encodeSt(string s){
        unordered_map<char,int> values;
        int x = 0 ;
        for(auto i : s){
            if(!values.count(i)){
                values[i] = x;
                x++;
            }
        }
        string t = "";
        for(auto i : s){
            t += to_string(values[i]) + " ";
        }
        return t;
    }
    string encodePt(vector<string>&words){
        unordered_map<string,int> mp;
        int x = 0 ;
        for(auto i : words){
            if(!mp.count(i)){
                mp[i] = x;
                x++;
            }
        }
        string t = "";
        for(auto i : words){
            t += to_string(mp[i]) + " ";
        }
        return t;
    }
    bool wordPattern(string pattern, string s) {
        string encodedS = encodeSt(pattern);
        string token ;
        stringstream ss(s);
        vector<string> words;
        while(getline(ss,token,' ')){
            if(!token.empty()){
                words.push_back(token);
            }
        }
        string encodedPat = encodePt(words);
        return encodedS == encodedPat ;
    }
};