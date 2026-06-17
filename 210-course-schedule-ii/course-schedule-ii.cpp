class Solution {
public:

    void toposort(int src,vector<bool>&vis,stack<int>&s,vector<vector<int>>&graph){
        vis[src] = true;

        for(int i=0;i<graph.size();i++){
            int u = graph[i][1];
            int v = graph[i][0];
            if(u == src){
                if(!vis[v]){
                    toposort(v,vis,s,graph);
                }
            }
        }
        s.push(src);
    }
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
    vector<int> findOrder(int numCourses, vector<vector<int>>& graph) {
        int V = numCourses; //[v,u] v <---- u
        vector<bool>vis(V,false);
        vector<bool>rec(V,false);
        vector<int>ans;
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(iscycle(i,vis,rec,graph)){
                    return ans;
                }
            }
        }
        //topological sorting 

        vector<bool>vis2(V,false);
        stack<int>s;
        for(int i=0;i<V;i++){
            if(!vis2[i]){
                toposort(i,vis2,s,graph);
            }
        }

        while(s.size() > 0){
            ans.push_back(s.top());
            s.pop();
        }
    return ans;
    }
};