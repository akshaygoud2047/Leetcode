class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return {0};
        }
        int nextsum = accumulate(begin(nums), end(nums), 0);
        
        vector<int>ans(n);
        ans[n-1] = nextsum-nums[n-1];
        ans[0] = nextsum-nums[0];
        int prevsum = nums[0];
        nextsum = nextsum-prevsum-nums[1];
        for(int i=1;i<n-1;i++){
            ans[i] = abs(prevsum - nextsum);
            prevsum+=nums[i];
            nextsum = nextsum-nums[i+1];
        }
        
        return ans;
    }
};