class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = "";
        long long sum = 0;

        while(n > 0){
            int ld = n % 10;
            if(ld){
                s = to_string(ld) + s;
                sum += ld;
            }
            n = n / 10;
        }

        if(s == "") return 0;

        return stoll(s) * sum;
    }
};