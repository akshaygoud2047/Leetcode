class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;  // acts like a stack

        for (int x : nums) {
            long long curr = x;

            // Keep merging while top is equal to current
            while (!st.empty() && st.back() == curr) {
                curr = curr + st.back();  // merge
                st.pop_back();
            }

            st.push_back(curr);
        }

        return st;
    }
};
