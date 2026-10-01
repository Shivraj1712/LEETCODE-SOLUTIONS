class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s(jewels.begin(),jewels.end());
        int count = 0;
        for(auto i : stones){
            count += (s.count(i)) ? 1 : 0 ;
        }
        return count;
    }
};