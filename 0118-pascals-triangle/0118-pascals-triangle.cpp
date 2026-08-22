class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1,1}};
        vector<vector<int>> triangle = {{1},{1,1}};
        for(auto i = 2 ; i < numRows; ++i){
            vector<int> temp;
            temp.push_back(1);
            for(auto j = 1 ; j <= i - 1 ; ++j){
                int val = triangle[i-1][j-1] + triangle[i-1][j];
                temp.push_back(val);
            }
            temp.push_back(1);
            triangle.push_back(temp);
        }
        return triangle;
    }
};