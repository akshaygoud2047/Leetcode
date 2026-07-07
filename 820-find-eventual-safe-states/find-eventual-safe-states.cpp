class Solution {
public:

    bool iscyclexists(vector<vector<int>>& graph, int u,
                      vector<bool>& vis, vector<bool>& recpath) {

        vis[u] = true;
        recpath[u] = true;

        for (int v : graph[u]) {

            if (!vis[v]) {
                if (iscyclexists(graph, v, vis, recpath))
                    return true;
            }
            else if (recpath[v]) {
                return true;
            }
        }

        recpath[u] = false;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int V = graph.size();

        vector<bool> vis(V, false);
        vector<bool> recpath(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                iscyclexists(graph, i, vis, recpath);
            }
        }

        vector<int> safenodes;

        for (int i = 0; i < V; i++) {
            if (recpath[i] == false) {
                safenodes.push_back(i);
            }
        }

        return safenodes;
    }
};