class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> hash;   // ✅ char as key

        for (int i = 0; i < jewels.length(); i++) {
            char c = jewels[i];
            hash[c]++;
        }

        int count = 0;
        for (int i = 0; i < stones.length(); i++) {
            char ch = stones[i];
            if (hash.find(ch) != hash.end()) {
                count++;
            }
        }
        return count;
    }
};