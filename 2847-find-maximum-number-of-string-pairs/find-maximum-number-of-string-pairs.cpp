class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> st;
        int ans = 0;

        for (string s : words) {
            string rev = s;
            reverse(rev.begin(), rev.end());

            if (st.count(rev))
                ans++;
            else
                st.insert(s);
        }

        return ans;
    }
};