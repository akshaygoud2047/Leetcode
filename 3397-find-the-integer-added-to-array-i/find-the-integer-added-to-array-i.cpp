class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        return (nums1[0] > nums2[0])?nums2[0] - nums1[0]:nums2[0] - nums1[0];
    }
};