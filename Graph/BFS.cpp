// #include <bits/stdc++.h> 
// #include<unordered_map>
// #include<queue>
// #include<set>

// void prepareadjlist(unordered_map<int,set<int>> &adjlist,vector<pair<int, int>> &edges){
//     for(int i=0;i<edges.size();i++){

//         int u = edges[i].first;
//         int v = edges[i].second;

//         adjlist[u].insert(v);
//         adjlist[v].insert(u); 
//     }
// }

// void bfs(unordered_map<int,set<int>> &adjlist,unordered_map<int,bool> &visited,
// vector<int> &ans,int node){
      
//     queue<int> q;
//     q.push(node);
//     visited[node] = 1;

//     while(!q.empty()){
//         int frontnode = q.front();
//         q.pop();

//         ans.push_back(frontnode);

//         for(auto i:adjlist[frontnode]){
//            if(!visited[i]){
//                q.push(i);
//                visited[i] = 1;
//            }
//         }
//     }

// }
// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     unordered_map<int,set<int>> adjlist;
//     vector<int> ans;
//     unordered_map<int,bool> visited;

//     prepareadjlist(adjlist,edges);

//     for(int i=0;i<vertex;i++){
//         if(!visited[i]){
//             bfs(adjlist,visited,ans,i);
//         }
//     }
//     return ans;
// }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> ans;
    // unordered_map<int,bool> visited;
    vector<bool> visited(V,false);
    
    queue<int> q;
    q.push(0);
    visited[0] = 1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        ans.push_back(frontnode);

        for(auto it=adj[frontnode].begin();it!=adj[frontnode].end();it++){
           if(!visited[*it]){
               visited[*it] = 1;
               q.push(*it);
           }
        }
    }
    return ans;
    

    }
};

