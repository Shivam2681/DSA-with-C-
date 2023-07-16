// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<vector>
// bool iscyclic(int sourcenode,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj){

//     unordered_map<int,int> parent;
//     parent[sourcenode] = 1;
//     visited[sourcenode] = true;

//     queue<int> q;
//     q.push(sourcenode);

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto i: adj[front]){
//             if(visited[i] == true && i != parent[front]){
//                 return true;
//             }
//             else if(!visited[i]){
//                 q.push(i);
//                 visited[i] = true;
//                 parent[i] = front;
//             }
//         }

//     }
//     return false;
// }
// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<m;i++){

//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     unordered_map<int,bool> visited;

//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bool ans = iscyclic(i,visited,adj);
//             if(ans == 1){
//                 return "Yes";
//             }
//         }

//     }
//     return "No";
// }


/*********Using DFS***********/
//GFG

// class Solution {
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool dfs(int node, int parent,unordered_map<int,bool> &visited,vector<int> adj[]){
//         visited[node] = true;
//         for(auto neighbour: adj[node]){
//             if(!visited[neighbour]){
//                 bool cycledetected = dfs(neighbour,node,visited,adj);
//                 if(cycledetected){
//                     return true;
//                 }
//             }
//             else if(neighbour != parent){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<int> adj[]) {
//         unordered_map<int,bool> visited;
//         for(int i=0;i<V;i++){
//             if(!visited[i]){
//                 bool ans = dfs(i,-1,visited,adj);
//                 if(ans == 1){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

