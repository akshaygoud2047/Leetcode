class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.length();
        for(int i=0;i<n-1;i++){
            int m1 = '9' - s[i];
            int m2 = '9' - s[i+1];
            if(abs(m1 - m2)>2){
                return false;
            }
        }
        return true;
    }
};