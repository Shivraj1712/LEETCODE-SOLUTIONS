class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(auto i = 0 ; i < n ; ++i){
            int temp = 0;
            for(auto j = i + 1 ; j < n ; ++j){
                temp = (temp > arr[j]) ? temp : arr[j];
            }
            swap(arr[i],temp);
        }
        arr.back() = -1;
        return arr;
    }
};