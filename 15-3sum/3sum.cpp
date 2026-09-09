class Solution {
public:
    vector < vector<int>>ans;
    void twoSum(vector<int>& nums, int left, int right, int target) {

        int sum = 0;
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                left++;
            } else if (nums[left] + nums[right] > target) {
                right--;             
            } else {
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }
                ans.push_back({-target, nums[left], nums[right]});
                left++;
                right--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        if (n < 3) return {};
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int target = -(nums[i]);
            twoSum(nums, i+1, n-1,target);
        }
        return ans;
    }
};