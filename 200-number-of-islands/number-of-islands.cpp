class Solution {
public:
    void dfs(int i, int j, int rows, int cols,
             vector<vector<char>>& grid,
             vector<vector<bool>>& vis) {

        // Base cases
        if (i < 0 || i >= rows || j < 0 || j >= cols)
            return;

        if (vis[i][j] || grid[i][j] == '0')
            return;

        // Mark current cell as visited
        vis[i][j] = true;

        // Explore all 4 directions
        dfs(i - 1, j, rows, cols, grid, vis); // Up
        dfs(i + 1, j, rows, cols, grid, vis); // Down
        dfs(i, j - 1, rows, cols, grid, vis); // Left
        dfs(i, j + 1, rows, cols, grid, vis); // Right
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>> vis(rows, vector<bool>(cols, false));

        int count = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    count++;                 // Found a new island
                    dfs(i, j, rows, cols, grid, vis);
                }
            }
        }

        return count;
    }
};