class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closetsum = 100000;
        for(int k=0;k<n-2;k++){
            int i = k+1;
            int j = n-1;
            
            while(i<j){
                int sum = nums[i]+nums[j]+nums[k];
                
                if(abs(target-sum) < abs(target-closetsum)){
                    closetsum = sum;
                }
                if(sum<target){
                    i++;
                }
                else{
                    j--;
                }

            }
        }
        return closetsum;
    }
};