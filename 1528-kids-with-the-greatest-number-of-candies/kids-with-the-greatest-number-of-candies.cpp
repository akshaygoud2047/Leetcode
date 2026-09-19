class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>ans(n,true);
        for(int i=0;i<n;i++){
            int ele = candies[i]+ extraCandies;
            for(int j=0;j<n;j++){
                if(j == i) continue;
                if(ele < candies[j]){
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;

    }
};