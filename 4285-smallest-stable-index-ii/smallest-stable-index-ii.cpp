class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffmin(n,0);
        
        int maxi = nums[0];
        suffmin[n-1] = nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            suffmin[i] = min(nums[i],suffmin[i+1]);
        }
        
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            int instability = maxi - suffmin[i];
            if(instability<=k){
                return i;
            }
        }
        return -1;
    }
};