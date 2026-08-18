class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        int pos = -1;
        while((pos = s.find(' ')) != string::npos){
            string word = s.substr(0,pos);
            if(!word.empty()) words.push_back(word);
            s = s.erase(0,pos+1); 
        }
        if(!s.empty()) words.push_back(s);
        for(auto i = 0 ; i < words.size() / 2 ; ++i){
            swap(words[i],words[words.size() - i -1]);
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