class Solution {
public:

    void dfs(int i,int j,int rows,int cols,vector<vector<int>>& grid,int &count){

        if(i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == -1 || grid[i][j] == 0){
            return;
        }

        grid[i][j] = -1;  // vis
        count++;
        
        dfs(i+1,j,rows,cols,grid,count); // bottom
        dfs(i-1,j,rows,cols,grid,count); // top
        dfs(i,j+1,rows,cols,grid,count); // right
        dfs(i,j-1,rows,cols,grid,count); // left

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int cols = grid[0].size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 1){
                    int count = 0;
                    dfs(i,j,n,cols,grid,count);
                    maxi = max(maxi,count);
                }
            }
        }
        return maxi;
    }
};