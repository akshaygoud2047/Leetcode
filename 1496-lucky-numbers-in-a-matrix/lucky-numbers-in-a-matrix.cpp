class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        set<int> rowmin;
        set<int> colmax;

        // Row minimums
        for (int i = 0; i < n; i++) {
            int mini = INT_MAX;
            for (int j = 0; j < m; j++) {
                mini = min(mini, mat[i][j]);
            }
            rowmin.insert(mini);
        }

        // Column maximums
        for (int j = 0; j < m; j++) {
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxi = max(maxi, mat[i][j]);
            }
            colmax.insert(maxi);
        }

        vector<int> ans;

        for (int x : rowmin) {
            if (colmax.count(x))
                ans.push_back(x);
        }

        return ans;
    }
};