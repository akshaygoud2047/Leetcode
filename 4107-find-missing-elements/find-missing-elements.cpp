class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int>hash(101,0);
        for(int num : nums){
            hash[num]++;
            if(num>maxi) maxi = num;
            if(num<mini) mini = num;
        }
        vector<int>ans;
        for(int i=mini;i<=maxi;i++){
            if(!hash[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};