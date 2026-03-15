class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                hash[nums[i]]++;
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0 && hash[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};