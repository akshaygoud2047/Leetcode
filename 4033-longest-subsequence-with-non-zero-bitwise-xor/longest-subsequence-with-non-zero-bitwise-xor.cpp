class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xor_result = 0;
        bool allzeroes = true;
        for(int i=0;i<n;i++){
            xor_result = xor_result ^ nums[i];
            if(nums[i]!=0){
                allzeroes = false;
            }
        }

        if(allzeroes){
            return 0;
        }
        
        return (xor_result == 0)?n-1:n;
    }
};