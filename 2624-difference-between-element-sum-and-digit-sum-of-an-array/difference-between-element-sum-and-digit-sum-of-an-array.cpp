class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }
        int j = 0;
        while(j<n){
            int num = nums[j];
            if(num<=9){
                sum2+=nums[j];
            }
            else{
                while(num>0){
                    int ld = num%10;
                    sum2+=ld;
                    num = num/10;
                }
            }
            j++;
        }
        return abs(sum1 - sum2);
    }
};