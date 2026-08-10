class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int count = INT_MAX;
        for(int i=0;i<n;i++){
            int count1 = 0;
            for(int j=0;j<tasks[i].size();j++){
                count1+=tasks[i][j];
            }
            if(count1<=count){
                count = count1;
            }
        }
        return count;
    }
};