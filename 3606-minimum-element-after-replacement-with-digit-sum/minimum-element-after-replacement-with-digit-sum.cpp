class Solution {
public:
    int sumofdigits(int m){
            int sum = 0;
            while(m>0){
                int ld = m%10;
                sum+=ld;
                m = m/10;
            }
            return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        
        for(int i=0;i<n;i++){
            int s = sumofdigits(nums[i]);
            mini = min(s,mini);
        }
        return mini;
    }
};