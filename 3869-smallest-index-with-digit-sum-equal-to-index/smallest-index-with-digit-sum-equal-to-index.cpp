class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        
        
        for(int i=0;i<n;i++){
            int sum = 0;
            int m = nums[i];
            while(m>0){
                int ld = m%10;
                sum+=ld;
                m = m/10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};