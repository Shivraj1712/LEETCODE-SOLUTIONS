class NumArray {
public:
    vector<int>p ;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n+1,0);
        for(auto i = 0 ; i < n ; ++i){
            temp[i+1] = temp[i] + nums[i];
        }
        p = temp ;
    }
    
    int sumRange(int left, int right) {
        return p[right+1] - p[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */