class Solution {
public:

    bool ispalin(string s) {
        int n = s.length();

        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                return false;
            }
        }

        return true;
    }

    bool isPalindromic(string s) {

        string s1 = "";

        for (int i = 0; i < s.length(); i++) {

            int n = s[i];
            string binary = "";

            while (n > 0) {
                if (n % 2 == 0)
                    binary += "0";
                else
                    binary += "1";

                n /= 2;
            }

            reverse(binary.begin(), binary.end());

            // Make it 8 bits
            while (binary.length() < 8) {
                binary = "0" + binary;
            }

            s1 += binary;
        }

        return ispalin(s1);
    }
};