class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return {0};
        bool t = false;
        for(int i=0;i<n-1;i++){
            int num = nums[i];
            int count = 0;
            if(num%2 == 0){
                for(int j=i+1;j<n;j++){
                    if(nums[j]%2!=0){
                        count++;
                    }
                }
            }
            else{ 
                for(int j=i+1;j<n;j++){
                    if(nums[j]%2==0){
                        count++;
                    }
                }
            }
            nums[i] = count;
        }
        nums[n-1] = 0;
        return nums;
    }
};