class Solution {
public:
    int solve(int m) {
        int digitproduct = 1;
        while (m > 0) {
            int ld = m % 10;
            digitproduct *= ld;
            m = m / 10;
        }
        return digitproduct;
    }
    int smallestNumber(int n, int t) {
        for (int i = n; i <= 110; i++) {

            int digitproduct = solve(i);

            if (digitproduct % t == 0) {
                return i;
            }
        }
        return -1;
    }
};