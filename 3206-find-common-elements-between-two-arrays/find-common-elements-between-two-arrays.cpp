class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int maxi = max(n,m);
        vector<int>ans;
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<maxi;i++){
            if(i<n){
                map1[nums1[i]]++;
            }
            if(i<m){
                map2[nums2[i]]++;
            }
        }

        for(int i=0;i<maxi;i++){
            if(i<n){
                if(map2.count(nums1[i])){
                    count1++;
                }
            }
            if(i<m){
                if(map1.count(nums2[i])){
                    count2++;
                }
            }
        }
        ans.push_back(count1);
        ans.push_back(count2);
        return ans;
    }
};