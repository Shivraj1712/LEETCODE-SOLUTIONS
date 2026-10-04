class Solution {
public:
    string encode(string s){
        unordered_map<char,int> freq;
        int tx = 0 ;
        for(auto i : s){
            if(!freq.count(i)){
                freq[i] = tx;
                tx++;
            }
        }
        string x = "";
        for(auto i : s){
            x += to_string(freq[i])+" ";
        }
        return x;
    }
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        string encodedS = encode(s);
        string encodedT = encode(t);
        return encodedT == encodedS ;
    }
};