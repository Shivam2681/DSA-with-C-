// #include<unordered_map>
// #include<queue>
// #include<list>
// #include<vector>
// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

// 	unordered_map<int,list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adj[u].push_back(v);
// 		adj[v].push_back(u);
//     }

// 	vector<bool> visited(n);
// 	unordered_map<int,int> parent;
// 	queue<int> q;
// 	q.push(s);
// 	parent[s] = -1;

// 	while(!q.empty()){
// 		int front = q.front();
// 		q.pop();

// 		for(auto i:adj[front]){
// 			if(!visited[i]){
// 				visited[i] = true;
// 				parent[i] = front;
// 				q.push(i);
// 			}
// 		}
// 	}

// 	vector<int> ans;
// 	int currentnode = t;
// 	ans.push_back(t);

// 	while(currentnode != s){
// 		currentnode = parent[currentnode];
// 		ans.push_back(currentnode);
// 	}
// 	reverse(ans.begin(),ans.end());
// 	return ans;

// }
