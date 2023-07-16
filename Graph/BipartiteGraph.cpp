// class Solution {
// public:
// bool dfs(int node,int col,vector<int> &color,vector<int>adj[]){
   
//         color[node] = col;
 
//         for(auto i:adj[node]){
//             if(color[i] == -1){
//                 if(dfs(i,!col,color,adj) == false){
//                     return false;
//                 }
//             }
//             else if(color[i] == col){
//                 return false;
//             }
//         }
//         return true;
// }
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    vector<int> color(V);
// 	    for(int i=0;i<V;i++){
// 	        color[i] = -1;
// 	    }
	    
// 	    for(int i=0;i<V;i++){
// 	        if(color[i] == -1){
// 	            if(dfs(i,0,color,adj) == false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };

