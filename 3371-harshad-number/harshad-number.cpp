class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int sum = 0;
        while(n>0){
            int ld = n%10;
            n = n/10;
            sum+=ld;
        }
        return (x%sum == 0) ? sum:-1;
    }
};