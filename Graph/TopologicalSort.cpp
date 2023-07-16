//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void toposort(int node,vector<bool> &visited,stack<int> &s,vector<int> adj[]){
	    visited[node] = true;
	    
	    for(auto i:adj[node]){
	        if(!visited[i]){
	            toposort(i,visited,s,adj);
	        }
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool> visited(V);
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            toposort(i,visited,s,adj);
	        }
	    }
	    vector<int> ans;
	    
	   while(!s.empty()){
	       ans.push_back(s.top());
	       s.pop();
	   }
	   return ans;
	}
};

/*********Kahn's Algorithm**********/

#include <bits/stdc++.h> 
#include<queue>
#include<unordered_map>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    vector<int> indegree(v);

    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int> ans;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        ans.push_back(front);

        for(auto i:adj[front]){
            indegree[i]--;
            if(indegree[i] == 0){
                q.push(i);
            }
        }
    }
    return ans;
}

