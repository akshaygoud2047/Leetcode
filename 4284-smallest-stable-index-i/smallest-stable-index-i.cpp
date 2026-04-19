class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>suff_min(n);
    suff_min[n-1] = nums[n-1];
    for(int i=n-2;i>=0;i--) {
        suff_min[i] = min(nums[i], suff_min[i+1]);
    }
    int pre_maxi = -1;
    for(int i=0;i<n;i++){
        pre_maxi = max(pre_maxi,nums[i]);
        int Instability = pre_maxi - suff_min[i];
        if(Instability <= k) {
            return i;
        }
    }
    return -1;
    }
};