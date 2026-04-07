class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float>avgs;
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n/2;i++){
            float avg = (nums[i]+nums[n-i])/2.0;
            avgs.push_back(avg);
        }
        sort(avgs.begin(),avgs.end());
        return avgs[0];
    }
};