/**********************Using DFS*********************/
// #include<unordered_map>
// #include<list>
// bool dfscycle(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsvisited,
// unordered_map<int,list<int>> &adj){
//   visited[node] = true;
//   dfsvisited[node] = true;

//   for(auto i:adj[node]){
//     if(!visited[i]){
//       bool checkcycle = dfscycle(i,visited,dfsvisited,adj);
//       if(checkcycle){
//         return true;
//       }
//     }
//     else if(dfsvisited[i]){
//       return true;
//     }
//   }
//   dfsvisited[node] = false;
//   return false;
// }

// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//   unordered_map<int,list<int>> adj;
//    for(int i=0;i<edges.size();i++){
//     int u = edges[i].first;
//     int v = edges[i].second;

//     adj[u].push_back(v);
//   }

//   unordered_map<int,bool> visited;
//   unordered_map<int,bool> dfsvisited;

//   for(int i=1;i<=n;i++){
//     if(!visited[i]){
//       bool ans = dfscycle(i,visited,dfsvisited,adj);
//       if(ans == 1){
//         return true;
//       }
//     }
//   }
//   return false;
// }

/********* Using BFS*********/


// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }

//     vector<int> indegree(v);

//     for(auto i:adj){
//         for(auto j:i.second){
//             indegree[j]++;
//         }
//     }
//     queue<int> q;
//     for(int i=0;i<v;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }
//     int count;

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         count++;

//         for(auto i:adj[front]){
//             indegree[i]--;
//             if(indegree[i] == 0){
//                 q.push(i);
//             }
//         }
//     }
//     if(count == v){
//         return false;
//     }
//     else{
//         return true;
//     }

// }