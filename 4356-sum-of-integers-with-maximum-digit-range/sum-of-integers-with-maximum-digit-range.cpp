class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> digitrange(n,0);

        for(int i=0;i<n;i++){
            int ele = nums[i];
            int maxi = INT_MIN;
            int mini = INT_MAX;

            while(ele > 0){
                int ld = ele % 10;

                if(ld > maxi) maxi = ld;
                if(ld < mini) mini = ld;

                ele = ele / 10;
            }

            digitrange[i] = maxi - mini;
        }

        int maxi2 = INT_MIN;

        for(int i=0;i<n;i++){
            if(digitrange[i] > maxi2)
                maxi2 = digitrange[i];
        }

        int sum = 0;

        for(int i=0;i<n;i++){
            if(digitrange[i] == maxi2)
                sum += nums[i];
        }

        return sum;
    }
};