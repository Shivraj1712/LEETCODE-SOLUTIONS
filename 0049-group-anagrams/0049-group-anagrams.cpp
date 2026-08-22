class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> values;
        for(auto i : strs){
            string s = i ;
            sort(s.begin(),s.end());
            values[s].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it : values){
            ans.push_back(it.second);
        }
        return ans;
    }
};
