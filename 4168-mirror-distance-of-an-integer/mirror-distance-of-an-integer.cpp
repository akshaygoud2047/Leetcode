class Solution {
public:
    int mirrorDistance(int n) {
        int m = n;
        int r = 0;
        long long int d = 1;
        while(n>0){
            int rem = n%10;
            r = r*10 + rem;
            n = n/10;
        }
        return abs(m - r);
    }
};