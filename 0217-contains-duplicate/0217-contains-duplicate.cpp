// TC - O(nlogn) or O(n)
// needs to check if any numbers appears at least more than once
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i : nums){
            if(st.count(i)) return true;
            st.insert(i);
        }
        return false;
    }
};