class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);

        // Step 1: Find the first decreasing digit from the right
        int i = s.size() - 2;

        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        // No greater permutation exists
        if (i < 0) {
            return -1;
        }

        // Step 2: Find the smallest digit greater than s[i]
        int j = s.size() - 1;

        while (s[j] <= s[i]) {
            j--;
        }

        // Step 3: Swap
        swap(s[i], s[j]);

        // Step 4: Reverse the suffix
        reverse(s.begin() + i + 1, s.end());

        // Step 5: Check 32-bit integer range
        long long ans = stoll(s);

        if (ans > INT_MAX) {
            return -1;
        }

        return (int)ans;
    }
};