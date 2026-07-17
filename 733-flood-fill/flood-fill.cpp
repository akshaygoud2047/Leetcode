class Solution {
public:

    void dfs(int row, int col, int m, int n,
             vector<vector<int>>& image,
             vector<vector<bool>>& vis,
             int newcolor,
             int oldcolor) {

        vis[row][col] = true;
        image[row][col] = newcolor;

        // Up
        if(row-1 >= 0 && !vis[row-1][col] &&
           image[row-1][col] == oldcolor){
            dfs(row-1,col,m,n,image,vis,newcolor,oldcolor);
        }

        // Down
        if(row+1 < m && !vis[row+1][col] &&
           image[row+1][col] == oldcolor){
            dfs(row+1,col,m,n,image,vis,newcolor,oldcolor);
        }

        // Left
        if(col-1 >= 0 && !vis[row][col-1] &&
           image[row][col-1] == oldcolor){
            dfs(row,col-1,m,n,image,vis,newcolor,oldcolor);
        }

        // Right
        if(col+1 < n && !vis[row][col+1] &&
           image[row][col+1] == oldcolor){
            dfs(row,col+1,m,n,image,vis,newcolor,oldcolor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc,
                                  int newcolor) {

        int m = image.size();
        int n = image[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        dfs(sr, sc, m, n, image, vis, newcolor, image[sr][sc]);

        return image;
    }
};