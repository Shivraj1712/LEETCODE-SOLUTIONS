class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        long long sum = 0 ;
        vector<int> prefix(arr.size() + 1,0);
        for(auto i = 0 ; i < arr.size(); ++i){
            prefix[i+1] = prefix[i] + arr[i];
        }
        for(auto i = 0 ; i < arr.size() ; ++i){
            int temp = 0 ;
            for(auto j = i ; j < arr.size(); ++j){
                int length = j - i + 1 ;
                if(length % 2 != 0){
                    temp += prefix[j+1] - prefix[i];
                }
            }
            sum += temp ;
        }
        return (int) sum;
    }
};