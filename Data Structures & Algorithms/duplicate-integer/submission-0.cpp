class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i : nums) hash[i]++;
        for(auto &p: hash){
            if(p.second>1) return true;
        }
        return false;
    }
};