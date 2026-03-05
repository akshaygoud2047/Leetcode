class Solution {
public:
    bool checkDivisibility(int n) {
        if(n<10) return false;
        // if(n%10 == 0) return true;
        int m = n;
        int sum = 0;
        int prdct = 1;
        while(n>0){
            int ld = n%10;
            sum+=ld;
            prdct*=ld;
            n = n/10;
        }
        if(m%(prdct+sum) == 0) return true;
        return false;
    }
};