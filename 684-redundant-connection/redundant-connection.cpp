class Solution {
public:
    bool dfs(unordered_map<int, vector<int>>& graph,
             int src,
             int dest,
             vector<bool>& visited) {

        if (src == dest)
            return true;

        visited[src] = true;

        for (int ngbr : graph[src]) {
            if (!visited[ngbr]) {
                if (dfs(graph, ngbr, dest, visited))
                    return true;
            }
        }

        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        unordered_map<int, vector<int>> graph;
        int n = edges.size();

        for (auto &edge : edges) {

            int a = edge[0];
            int b = edge[1];

            vector<bool> visited(n + 1, false);

            if (graph.count(a) && graph.count(b) &&
                dfs(graph, a, b, visited))
                return edge;

            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        return {};
    }
};