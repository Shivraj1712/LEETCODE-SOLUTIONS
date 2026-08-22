class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto i : details){
            string a = "" ;
            a += i[11];
            a += i[12];
            int age = stoi(a);
            if(age > 60) count++;
        }
        return count;
    }
};