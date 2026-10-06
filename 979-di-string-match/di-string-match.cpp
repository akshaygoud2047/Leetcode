class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int m = n;
        vector<int>ans(n+1,0);
        int j = 0;
        for(int i=0;i<n;i++){
            char first = s[i];
            if(first == 'I'){
                ans[i] = j;
                j++;
            }
            else{
                ans[i] = m;
                m--;
            }

        }
        ans[n] = m;
        return ans;
    }
};