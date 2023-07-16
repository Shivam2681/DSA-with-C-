// #include <bits/stdc++.h> 
// /***********************************
//     class BinaryTreeNode {
//         public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//     };
// ***********************************/
//   void solve(BinaryTreeNode<int> *root,int k,int &count,vector<int> &path){
//       if(root == NULL){
//           return;
//       }
//       path.push_back(root->data);
      
//       solve(root->left,k,count,path);
//       solve(root->right,k,count,path);
      
//       int size = path.size();
//       int sum = 0;
//       for(int i=size-1;i>=0;i--){
//           sum += path[i];
//           if(sum == k){
//               count++;
//           }
//       }
//       path.pop_back();
//   }
// int findSumPaths(BinaryTreeNode<int> *root, int target) {
// 	int count = 0;
//         vector<int> path;
//         solve(root,target,count,path);
//         return count;
// }