class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);
        vector<int> ans;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '6') {          // only change 6
                char ch = s[i];
                s[i] = '9';
                ans.push_back(stoi(s));
                s[i] = ch;
            }
        }

        if (ans.empty()) return num;

        sort(ans.begin(), ans.end(), greater<int>());
        return ans[0];
    }
};