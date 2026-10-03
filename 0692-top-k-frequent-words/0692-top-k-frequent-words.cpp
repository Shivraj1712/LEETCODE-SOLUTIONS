class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(auto i : words) freq[i]++;
        map<int,vector<string>,greater<int>> mp;
        for(auto &[word,freq]:freq){
            mp[freq].push_back(word);
        }
        vector<string> ans ;
        for(auto &[freq,words] : mp){
            sort(words.begin(),words.end());
            for(auto i : words){
                if(k == 0) return ans;
                ans.push_back(i);
                k--;
            }
        }
        return ans;
    }
};