class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp ;
        for(int i=0;i<n;i++){
            int ele = nums[nums[i]];
            temp.push_back(ele);
        }
        return temp;
    }
};