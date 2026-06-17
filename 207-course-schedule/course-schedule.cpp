class Solution {
public:
    bool iscycle(int src,vector<bool>&vis,vector<bool>&rec,vector<vector<int>>&graph){
        vis[src] = true;
        rec[src] = true;

        for(int i=0;i<graph.size();i++){
            int u = graph[i][1];
            int v = graph[i][0];

            if(u == src){
                if(!vis[v]){
                    if(iscycle(v,vis,rec,graph)){
                        return true;
                    }
                }
                else{
                    if(rec[v]){
                        return true;
                    }
                }
            }
        }
        rec[src] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>&graph) {
        int V = numCourses; //[v,u] v <---- u
        vector<bool>vis(V,false);
        vector<bool>rec(V,false);

        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(iscycle(i,vis,rec,graph)){
                    return false;
                }
            }
        }
        return true;
    }
};