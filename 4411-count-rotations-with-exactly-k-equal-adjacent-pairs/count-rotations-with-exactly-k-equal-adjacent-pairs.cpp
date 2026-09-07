class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n - 1; j++) {
                if (s[j] == s[j + 1]) {
                    count++;
                }
            }

            if (count == k) {
                ans++;
            }

            s = s.substr(1) + s[0];
        }

        return ans;
    }
};