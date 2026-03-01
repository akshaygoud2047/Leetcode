class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return {-1,-1};
        }
        map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<int>res;
        for(auto &p : hash){
            res.push_back(p.first);
        }
        for(int i=0;i<res.size();i++){
            for(int j=i+1;j<res.size();j++){
                if(hash[res[i]]!=hash[res[j]]){
                    return {res[i],res[j]};
                }
            }
        }
        return {-1,-1};
    }
};