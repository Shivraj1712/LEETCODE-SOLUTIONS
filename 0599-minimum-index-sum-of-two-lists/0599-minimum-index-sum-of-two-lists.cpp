class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        std::unordered_map<std::string,int> l1, l2, idSum;
        for(auto i = 0 ; i < list1.size(); ++i){
            l1[list1[i]] = i;
        }
        for(auto i = 0 ; i < list2.size(); ++i){
            l2[list2[i]] = i ;
        }
        int sum = INT_MAX;
        for(auto i : l1){
            if(l2.find(i.first) != l2.end()){
                idSum[i.first] = i.second + l2[i.first];
                if(sum > idSum[i.first]){
                    sum = idSum[i.first];
                }
            }
        }
        vector<string> ans;
        for(auto &[str,freq] : idSum){
            if(freq == sum){
                ans.push_back(str);
            }
        }
        return ans;
    }
};