class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int k = 1;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int ele = nums[i];
            if(ele%2==0){   
                ans[j] = nums[i];
                j+=2;
            }
            else{
                ans[k] = nums[i];
                k+=2;
            }
        }
        return ans;
    }
};