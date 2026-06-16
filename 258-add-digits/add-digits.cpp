class Solution {
public:
    int addDigits(int n) {
        long long sum = 0;
        long long ld;
        if(n<10) return n;
        while(n>=10){
            sum = 0;
            while(n>0){
                ld = n%10;
                sum+=ld;
                n = n/10;
            }
            n = sum;
        }
        return n;
    }
};