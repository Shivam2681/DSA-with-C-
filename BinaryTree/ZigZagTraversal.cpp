#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};
// class Solution {
// public:
//     vector < vector < int >> zigzagLevelOrderfast(TreeNode* root) {
//   vector < vector < int >> result;
//   if (root == NULL) {
//     return result;
//   }

//   queue < TreeNode* > nodesQueue;
//   nodesQueue.push(root);
//   bool leftToRight = true;

//   while (!nodesQueue.empty()) {
//     int size = nodesQueue.size();
//     vector < int > row(size);
//     for (int i = 0; i < size; i++) {
//       TreeNode* node = nodesQueue.front();
//       nodesQueue.pop();

//       // find position to fill node's value
//       int index = (leftToRight) ? i : (size - 1 - i);

//       row[index] = node -> val;
//       if (node -> left) {
//         nodesQueue.push(node -> left);
//       }
//       if (node -> right) {
//         nodesQueue.push(node -> right);
//       }
//     }
//     // after this level
//     leftToRight = !leftToRight;
//     result.push_back(row);
//   }
//   return result;
// }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         ans = zigzagLevelOrderfast(root);
//         return ans;
//     }
// };

vector<int> zigzagTreeTraversal(node *root)
{
    vector<int> result;
        if(root == NULL)
            return result;
        
        queue<node*> q;
        q.push(root);
        
        bool leftToRight = true;
        
        while(!q.empty()) {
            
            int size = q.size();
            vector<int> ans(size);
            
            //Level Process
            for(int i=0; i<size; i++) {
                
                node* frontNode = q.front();
                q.pop();
                
                //normal insert or reverse insert 
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode -> data;
                
                if(frontNode->left)
                    q.push(frontNode -> left);
                    
                if(frontNode->right)
                    q.push(frontNode -> right);
            }
            
            //direction change karni h
            leftToRight = !leftToRight;
           
          for(auto i:ans) {
              result.push_back(i);
          }  
        }
            return result;
}

int main(){
    
    return 0;
}