class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = (n*n)+1;
        vector<int>arr(size,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                arr[grid[i][j]]++;
            }
        }
        int repeated = -1;
        int missing = -1;
        for(int i=1;i<size;i++){
            if(arr[i] == 2){
                repeated = i;
            }
            if(arr[i] == 0){
                missing = i;
            }
        }
        return {repeated,missing};
    }
};