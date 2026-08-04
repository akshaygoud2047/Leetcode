class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=nums[0];i<nums[n-1];i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};