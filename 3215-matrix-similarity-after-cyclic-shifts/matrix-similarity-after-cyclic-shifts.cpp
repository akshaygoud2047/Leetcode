class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        k %= n;

        vector<vector<int>> orig = mat;

        for (int i = 0; i < m; i++) {

            if (i % 2 == 0) {
                // Even row -> Left Rotate
                rotate(mat[i].begin(),
                       mat[i].begin() + k,
                       mat[i].end());
            }
            else {
                // Odd row -> Right Rotate
                rotate(mat[i].rbegin(),
                       mat[i].rbegin() + k,
                       mat[i].rend());
            }
        }

        return mat == orig;
    }
};