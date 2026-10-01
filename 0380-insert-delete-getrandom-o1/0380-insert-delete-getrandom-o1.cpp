class RandomizedSet {
public:
    unordered_map<int,int> s;
    vector<int> values;
    RandomizedSet() {
        
    }
    bool isPresent(int val){
        return s.count(val);
    }
    bool insert(int val) {
        if(isPresent(val)){
            return false;
        }else{
            values.push_back(val);
            s[val] = values.size() - 1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(isPresent(val)){
            int lastValue = values.back();
            int lastIndex = values.size() - 1;
            int newIdx = s[val];
            swap(values[s[val]],values.back());
            values.pop_back();
            s.erase(val);
            if(lastValue != val){
                s[lastValue] = newIdx;
            }
            return true;
        }else{
            return false;
        }
    }
    
    int getRandom() {
        int idx = rand() % values.size();
        return values[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */