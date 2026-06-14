class Solution {
public:
    bool checkGoodInteger(int n) {
        int s1 = 0;
        int s2 = 0;
        while(n>0){
            int ld = n%10;
            n = n/10;
            s1+=ld;
            s2+=(ld*ld);
        }
        return ((s2-s1)>=50)?true:false;
    }
};