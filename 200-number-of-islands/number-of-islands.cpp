class Solution {
public:
    void dfs(int i, int j, int rows, int cols, vector<vector<char>>& grid) {

        // Base cases
        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == '$')
            return;

        if (grid[i][j] == '0')
            return;

        // Mark current cell as visited
        grid[i][j] = '$';

        // Explore all 4 directions
        dfs(i - 1, j, rows, cols, grid); // Up
        dfs(i + 1, j, rows, cols, grid); // Down
        dfs(i, j - 1, rows, cols, grid); // Left
        dfs(i, j + 1, rows, cols, grid); // Right
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int count = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    count++; // Found a new island
                    dfs(i, j, rows, cols, grid);
                }
            }
        }

        return count;
    }
};