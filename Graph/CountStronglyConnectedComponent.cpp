/***********Kosaraju's Algorithm**************/
// #include<unordered_map>
// #include<list>
// #include<stack>
// void toposort(int node,vector<bool> &visited,unordered_map<int,list<int>> &adj,
// stack<int> &st){
// 	visited[node] = true;

// 	for(auto i:adj[node]){
// 		if(!visited[i]){
// 			toposort(i,visited,adj,st);
// 		}
// 	}
// 	st.push(node);

// }
// void dfs(int node,vector<bool> &visited,unordered_map<int,list<int>> &transpose){
// 	visited[node] = true;

// 	for(auto i:transpose[node]){
// 		if(!visited[i]){
// 			dfs(i,visited,transpose);
// 		}
// 	}
// }
// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {
// 	unordered_map<int,list<int>> adj;
// 	for(int i=0;i<edges.size();i++){
// 		int u = edges[i][0];
// 		int v = edges[i][1];

// 		adj[u].push_back(v);
// 	}

// 	vector<bool> visited(v);
// 	stack<int> st;

// 	for(int i=0;i<v;i++){
// 		if(!visited[i]){
// 			toposort(i,visited,adj,st);
// 		}
// 	}

// 	unordered_map<int,list<int>> transpose;
// 	for(int i=0;i<v;i++){
// 		visited[i] = 0;
// 		for(auto nbr:adj[i]){
// 			transpose[nbr].push_back(i);
// 		}
// 	}
//     int count = 0;
// 	while(!st.empty()){
// 		int top = st.top();
// 		st.pop();

// 		if(!visited[top]){
// 			count++;
// 			dfs(top,visited,transpose);
// 		}
// 	}
// 	return count;
// }