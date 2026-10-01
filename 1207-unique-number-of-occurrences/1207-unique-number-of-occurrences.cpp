class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq ;
        for(auto i : arr)  freq[i]++;
        unordered_set<int> checkFreq;
        for(auto &[num,count] : freq){
            if(checkFreq.find(count) != checkFreq.end()) return false;
            checkFreq.insert(count);
        }
        return true;
    }
};