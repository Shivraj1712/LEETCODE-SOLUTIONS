class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> one(nums1.begin(),nums1.end()), two (nums2.begin(),nums2.end());
        vector<int>t1,t2;
        for(auto i : one){
            if(two.find(i) == two.end()){
                t1.push_back(i);
            }
        }
        for(auto i : two){
            if(one.find(i) == one.end()){
                t2.push_back(i);
            }
        }
        return {t1,t2};
    }
};