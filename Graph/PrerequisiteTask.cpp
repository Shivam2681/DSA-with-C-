//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	unordered_map<int,list<int>> adj;
    for(int i=0;i<prerequisites.size();i++){
        int u = prerequisites[i].first;
        int v = prerequisites[i].second;

        adj[u].push_back(v);
    }

    vector<int> indegree(N);

    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<N;i++){
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
    if(ans.size() == N){
        return true;
    }
    else{
        return false;
    }
	}
};

