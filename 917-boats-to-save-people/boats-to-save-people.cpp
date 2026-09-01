class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n = nums.size();
        int boats = 0;

        sort(nums.begin(),nums.end());

        int left = 0;
        int right = n-1;

        while(left <= right){
            if(nums[left] + nums[right] <= limit){
                left++;
                right--;
            }
            else{
                right--;
            }
            boats++;
        }
        
        return boats;
    }
        
};