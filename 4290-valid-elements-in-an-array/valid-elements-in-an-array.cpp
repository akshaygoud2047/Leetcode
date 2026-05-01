class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 || n == 2){
            return nums;
        }

        vector<bool> prefix(n,false);
        prefix[0] = true;

        int left_maxi = nums[0];

        // FIX 1: start from i = 1
        for(int i=1;i<n;i++){
            if(nums[i] > left_maxi){
                prefix[i] = true;
            }
            left_maxi = max(left_maxi, nums[i]);
        }

        vector<bool> suffix(n,false);
        suffix[n-1] = true;

        int right_maxi = nums[n-1];

        for(int i=n-2;i>=0;i--){
            if(nums[i] > right_maxi){
                suffix[i] = true;
            }
            right_maxi = max(right_maxi, nums[i]);
        }

        vector<int> temp;

        for(int i=0;i<n;i++){
            // FIX 2: remove break
            if(i == 0 || i == n-1 || prefix[i] || suffix[i]){
                temp.push_back(nums[i]);
            }
        }

        return temp;
    }
};