class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n,0), diff(n+1,0);
        for(auto i = 0 ; i < bookings.size() ; ++i){
            int l = bookings[i][0];
            int r = bookings[i][1];
            int x = bookings[i][2];
            diff[l-1] += x;
            diff[r] -= x;
        }
        for(auto i = 1 ; i <= n ; ++i){
            diff[i] += diff[i-1];
        }
        for(auto i = 0 ; i < n ; ++i){
            arr[i] += diff[i];
        }
        return arr;
    }
};