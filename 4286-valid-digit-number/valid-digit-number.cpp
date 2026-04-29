class Solution {
public:
    bool validDigit(int n, int x) {
        string s1 = to_string(n);
        string s2 = to_string(x);
        if(s1[0]!= s2[0]){
            for(int i=1;i<s1.length();i++){
                if(s1[i] == s2[0]){
                    return true;
                }
            }
        }
        return false;
    }
};