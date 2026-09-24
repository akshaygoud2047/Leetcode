
class Solution {
public:
    int getMinSwaps(string num, int k) {
        string target = num;

        // Generate the kth next permutation
        while (k > 0) {
            int i = target.size() - 2;

            while (i >= 0 && target[i] >= target[i + 1]) {
                i--;
            }

            if (i < 0) return -1;

            int j = target.size() - 1;

            while (target[j] <= target[i]) {
                j--;
            }

            swap(target[i], target[j]);
            reverse(target.begin() + i + 1, target.end());

            k--;
        }

        // Count minimum adjacent swaps
        int count = 0;
        string s = num;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == target[i]) continue;

            int j = i + 1;

            while (j < s.size() && s[j] != target[i]) {
                j++;
            }

            while (j > i) {
                swap(s[j], s[j - 1]);
                count++;
                j--;
            }
        }

        return count;
    }
};
