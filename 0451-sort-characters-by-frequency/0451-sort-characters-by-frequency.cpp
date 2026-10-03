class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto i : s) freq[i]++;
        // freq -> arr of char 
        map<int,vector<char>,greater<int>> st;
        for(auto &[ch,count] : freq){
            st[count].push_back(ch);
        }
        string ans = "";
        for(auto &[freq,arr] : st){
            for(auto i : arr){
                for(auto j = 0 ; j < freq; ++j) ans += i;
            }
        }
        return ans;
    }
};