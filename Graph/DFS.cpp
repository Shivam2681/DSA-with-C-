// void dfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,
// vector<int> &component){

//     component.push_back(node);
//     visited[node] = 1;

//     for(auto i:adj[node]){
//         if(!visited[i]){
//             dfs(i,visited,adj,component);
//         }
//     }


// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<edges.size();i++){

//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<vector<int>> ans;
//     unordered_map<int,bool> visited;

//     for(int i=0;i<V;i++){
//         vector<int> component;
//         if(!visited[i]){
//             dfs(i,visited,adj,component);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }

// GFG 
//{ Driver Code Starts

// void dfs(int node,unordered_map<int,bool> &visited,vector<int> adj[],
// vector<int> &ans){

//     ans.push_back(node);
//     visited[node] = 1;

//     for(int i=0;i<adj[node].size();i++){
//         if(!visited[adj[node][i]]){
//             dfs(adj[node][i],visited,adj,ans);
//         }
//     }


// }
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//     vector<int> ans;
//     unordered_map<int,bool> visited;

//     for(int i=0;i<V;i++){
//         if(!visited[i]){
//             dfs(i,visited,adj,ans);
//         }
//     }
//     return ans;
//     }
// };
