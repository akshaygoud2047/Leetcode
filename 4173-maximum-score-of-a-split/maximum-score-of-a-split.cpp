class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long int>prefix(n,0);
        vector<int>suffixmin(n,0);
        prefix[0] = nums[0];
        suffixmin[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suffixmin[i] = min(nums[i],suffixmin[i+1]);
        }
        long long int maxi  = INT_MIN;
        for(int i=0;i<n-1;i++){
            long long score = prefix[i] - suffixmin[i+1];
            maxi = max(score,maxi);
        }
        return maxi;
    }
};