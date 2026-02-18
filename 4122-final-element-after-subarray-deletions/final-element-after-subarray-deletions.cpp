class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        return max(nums[0], nums[n - 1]);
    }
};





// class Solution {
// public:
//     int finalElement(vector<int>& nums) {
//         int n = nums.size();
//         //sort(nums.begin(),nums.end());
//         if(n == 1){
//             return nums[0];
//         }
//         if(n == 2){
//             if(nums[0]>nums[1]){
//                 return nums[0];
//             }
//             return nums[1];
//         }
//         sort(nums.begin(),nums.end());
//         int left = 0 , right = n-1;
//         int mid = (left+right)/2;
//         if(n%2!=0){
//             return nums[mid];
//         }
//         return nums[mid+1];
//     }
// };