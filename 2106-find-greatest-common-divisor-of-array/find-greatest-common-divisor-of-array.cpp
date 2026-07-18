class Solution {
public:
    int gcd(int s, int l){
        for(int i=l;i>=0;i--){
            if(s%i == 0 && l%i==0){
                return i;
            }
        }
        return 1;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int small = nums[0];
        int large = nums[n-1];
        return gcd(small,large);
    }
};