class Solution {
public:
    int smallestEvenMultiple(int n) {
        int m = n;
        if(n%2 == 0) return n;
        while(m%2!=0 || m%n!=0){
            m++;
        }
        return m;
    }
};