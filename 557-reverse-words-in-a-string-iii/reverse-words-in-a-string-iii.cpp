class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;

        for (int k = 0; k <= n; k++) {
            if (k == n || s[k] == ' ') {
                int j = k - 1;

                while (i < j) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }

                i = k + 1;
            }
        }

        return s;
    }
};