class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(auto i : nums){
            if(temp.count(i)) return true ;
            temp.insert(i);
        }
        return false;
    }
};