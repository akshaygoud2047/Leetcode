class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(101,0);
        vector<int>sol;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
            if(ans[nums[i]]==2){
                if(sol.size()>1 && sol.back() == nums[i]){
                    continue;
                }
                else{
                    sol.push_back(nums[i]);
                }
                
            }
        }
        return sol;
    }
};