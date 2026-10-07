class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice{prices[0]}, maxDiff{0};
        for(auto i : prices){
            maxDiff = max(maxDiff,i-minPrice);
            minPrice = min(minPrice,i);
        }
        return maxDiff;
    }
};