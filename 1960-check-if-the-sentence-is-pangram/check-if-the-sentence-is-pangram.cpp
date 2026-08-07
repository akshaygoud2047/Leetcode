class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>ans(123);
        for(int i=0;i<s.size();i++){
            ans[s[i]] = 1;
        }
        for(int i=97;i<ans.size();i++){
            if(ans[i] == 0) return false;
        }
        return true;
    }
};