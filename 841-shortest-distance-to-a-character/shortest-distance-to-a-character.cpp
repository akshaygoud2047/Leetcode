class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n  = s.length();
        vector<int>ans(n,0);
        vector<int>mini;
        for(int i=0;i<n;i++){
            if(s[i] == c) mini.push_back(i);
            ans[i] = 0;
        }
        for(int j=0;j<n;j++){
            if(s[j] == c) continue;
            int mini2 = INT_MAX;
            for(int k=0;k<mini.size();k++){
                mini2 = min(abs(j-mini[k]),mini2);
            }
            ans[j] = mini2;
        }

    return ans;
    }
};