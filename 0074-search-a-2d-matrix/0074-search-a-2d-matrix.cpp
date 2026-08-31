class Solution {
public:
    bool searchInRow(vector<vector<int>>&m , int midR, int target){
        int low = 0 , high = m[0].size() -1;
        while(low <= high){
            int mid = low + (high-low) / 2;
            if(m[midR][mid] == target) return true;
            else if(m[midR][mid] < target) low = mid+1;
            else high = mid -1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int lowR = 0 , highR = m.size() -1;
        int cols = m[0].size() -1;
        while(lowR <= highR){
            int midR = lowR + (highR-lowR)  / 2;
            if(m[midR][0] <= target && target <= m[midR][cols]){
                return searchInRow(m,midR,target);
            }else if(target < m[midR][0]){
                highR = midR - 1;
            }else{
                lowR = midR + 1;
            }
        }
        return false;
    }
};