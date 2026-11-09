// TC - O(nlogn)
// sort the intervals and check for the end of the current and start of the next to check if merge is possible and if yes then store the end of the next as the new end for now and continue it for the next iteration 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int start(intervals[0][0]), end(intervals[0][1]);
        for(size_t i = 1 ; i < intervals.size(); ++i){
            if(end >= intervals[i][0]){
                end = max(end,intervals[i][1]);
            }else{
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};