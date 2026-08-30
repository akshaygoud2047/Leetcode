class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        map<int, int> mp;

        // Count frequency of each number
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Check each distinct number
        for (auto it : mp) {
            int ele = it.first;

            bool special = true;
            bool started = false;
            bool ended = false;

            for (int i = 0; i < n; i++) {
                if (nums[i] == ele) {
                    if (ended) {
                        special = false;
                        break;
                    }
                    started = true;
                }
                else if (started) {
                    ended = true;
                }
            }

            if (special) {
                count++;
            }
        }

        return count;
    }
};