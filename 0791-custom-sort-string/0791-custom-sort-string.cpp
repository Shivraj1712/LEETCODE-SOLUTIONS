class Solution {
public:
    string customSortString(string order, string s) {
        string temp = "";
        unordered_map<char,int> fs;
        for(auto i : s) fs[i]++;
        for(auto i = 0 ; i < order.size(); ++i){
            if(s.find(order[i]) != string::npos){
                while(fs[order[i]] > 0){
                    temp += order[i];
                    fs[order[i]]--;
                }
                if(fs[order[i]] == 0) fs.erase(order[i]);
            }
        }
        if(fs.size() != 0){
            for(auto &[ch,count] : fs){
                while(count > 0){
                    temp += ch;
                    count--;
                }
            }
        }
        return temp;
    }
};