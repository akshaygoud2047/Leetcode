class Solution {
public:
    int maxProduct(int n) {
        int ld;
        vector<int>ans;
        while(n>0){
            ld = n%10;
            ans.push_back(ld);
            n=n/10;
        }
        int m = ans.size();
        sort(ans.begin(),ans.end());

        return ans[m-1]*ans[m-2];
    }
};