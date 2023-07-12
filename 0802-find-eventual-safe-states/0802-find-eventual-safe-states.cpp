class Solution {
    private:
	bool dfsCheck(int node,vector<vector<int>>& graph, vector<bool> &vis,
                                             vector<bool> &pathVis,vector<bool> & check) {
		vis[node] = 1;
		pathVis[node] = 1;
		check[node] = 0;
		// traverse for adjacent nodes
		for (auto it : graph[node]) {
			// when the node is not visited
			if (!vis[it]) {
			if (dfsCheck(it, graph, vis, pathVis, check) == true) {
					check[node] = 0;
					return true;
				}

			}
			// if the node has been previously visited
			// but it has to be visited on the same path
			else if (pathVis[it]) {
				check[node] = 0;
				return true;
			}
		}
		check[node] = 1;
		pathVis[node] = 0;
		return false;
	}
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int vertices = graph.size();
	vector<bool> vis(vertices, false);
	vector<bool> pathVis(vertices, false);
	vector<bool> check(vertices, true);
        vector<int>safeNodes;
        for(int i=0;i<vertices;i++){
            if(!vis[i]){
                dfsCheck(i,graph,vis,pathVis,check);
            }
        }
        for(int i=0;i<vertices;i++){
            if(check[i]==1) safeNodes.push_back(i);
        }
        return safeNodes;
    }
};