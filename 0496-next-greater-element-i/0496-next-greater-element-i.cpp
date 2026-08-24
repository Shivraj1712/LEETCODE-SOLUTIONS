class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int>Nge(b.size(),-1),ans;
        stack<int> st;
        int n = b.size();
        for(auto i = n - 1; i >= 0; --i){
            while(!st.empty() && st.top() < b[i]) st.pop();
            if(!st.empty()) Nge[i] = st.top();
            st.push(b[i]);
        }
        unordered_map<int,int> mp;
        for(auto i = 0 ; i < b.size(); i++) mp[b[i]] = Nge[i];
        for(auto i = 0 ; i < a.size(); ++i){
            if(mp.count(a[i])){
                ans.push_back(mp[a[i]]);
            }
        }
        return ans;
    }
};