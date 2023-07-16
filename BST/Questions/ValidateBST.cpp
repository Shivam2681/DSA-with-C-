#include<iostream>
using namespace std;

class node{

public:
   int data;
   node*left;
   node*right;

   node(int data){
    this->data = data;
    this->left == NULL;
    this->right == NULL;
   } 
};
// class Solution {
// public:
//     vector<int> ans;

//     vector<int> inorder(TreeNode* root){
//         if(root == NULL){
//             return ans;
//         }
//         inorder(root->left);
//         ans.push_back(root->val);
//         inorder(root->right);

//         return ans;
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> ans = inorder(root);

//         for(int i=1;i<ans.size();i++){
//             if(ans[i] <= ans[i-1]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };

bool isBST(node* root,int min,int max){
    if(root == NULL){
        return true;
    }
    if(root->data > min && root->data < max){
        bool left = isBST(root->left,min,root->data);
        bool right = isBST(root->right,root->data,max);
        return left && right;
    }
    else{
        return false;
    }
}
bool validateBST(node* root) 
{
    return isBST(root,INT_MIN,INT_MAX);
}

int main(){
    
    return 0;
}