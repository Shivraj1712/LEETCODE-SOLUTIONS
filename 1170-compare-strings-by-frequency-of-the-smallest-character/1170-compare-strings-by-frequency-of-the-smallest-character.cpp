class Solution {
public:
    int f(string s){
        std::map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        char firstChar{mp.begin()->first};
        return mp[firstChar];
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        std::vector<int> temp;
        for(auto i = 0 ; i < words.size(); ++i){
            temp.push_back(f(words[i]));
        }
        std::vector<int> ans;
        for(auto i = 0 ; i < queries.size(); ++i){
            int countQ{f(queries[i])};
            int count{0};
            for(auto j : temp){
                if(j > countQ) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};