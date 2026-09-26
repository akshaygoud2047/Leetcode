class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string s1 = "";
        for (int i = 0; i < n; i++) {
            int m = s[i];
            if (m >= 48 && m <= 57) {
                s1 += s[i];
            } else if (s[i] >= 65 && s[i] <= 90) {
                s1 += char(s[i] + 32);
            } else if (s[i] >= 97 && s[i] <= 122) {
                s1 += s[i];
            }
        }
        int n1 = s1.length();
        for (int i = 0; i < n1 / 2; i++) {
            if (s1[i] != s1[n1 - i - 1]) {
                return false;
            }
        }
        return true;
    }
};