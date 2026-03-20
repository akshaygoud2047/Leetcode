class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int product = 0;
        for(int i=0;i<n;i++){
            char ch = s[i];
            int sm = (('z' - ch)+1) * (i+1);
            product+=sm;
        }
        return product;
    }
};