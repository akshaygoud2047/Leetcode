class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool>ans(123,false);
        for(int i=0;i<s.size();i++){
            ans[s[i]] = true;
        }
        for(int i=97;i<ans.size();i++){
            if(ans[i] == false) return false;
        }
        return true;
    }
};