class Solution {
public:
    string reverseWords(string s) {
        string token ;
        stringstream ss(s);
        vector<string> words;
        while(getline(ss,token,' ')){
            if(!token.empty()){
                words.push_back(token);
            }
        }
        for(auto &arr : words){
            reverse(arr.begin(),arr.end());
        }
        string ans = "";
        for(auto i = 0 ; i < words.size(); ++i){
            if(i != words.size() -1){
                ans += words[i] + " ";
            }else{
                ans += words[i];
            }
        }
        return ans;
    }
};