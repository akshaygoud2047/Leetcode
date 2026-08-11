class Solution {
public:
    int missingInteger(vector<int>& nums) {
       set<int>nums1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums1.insert(nums[i]);
        }
        int prefix = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i-1]+1 == (nums[i])){
                prefix += nums[i];
            }else{
                break;
            }
        }
        while(true){
            if(!nums1.count(prefix)){
               return prefix;
            }
            prefix+=1;
        }
        return prefix;
    }
};