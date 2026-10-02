class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        unordered_map<char,int> indices;
        for(auto i = 0 ; i < s.size(); ++i){
            mp[s[i]]++;
            if(indices.find(s[i]) == indices.end()){
                indices[s[i]] = i;
            }
        }
        for(auto i :s){
            if(mp[i] == 1) return indices[i];
        }
        return -1;
    }
};