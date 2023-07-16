#include<iostream>
#include<vector>
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


// void inorder(node* root, vector<int>&inorderVal){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left,inorderVal);
//     inorderVal.push_back(root->data);
//     inorder(root->right,inorderVal);
// }
// node* flatten(node* root)
// {
//     vector<int> inorderVal;
//     inorder(root,inorderVal);
//     int n = inorderVal.size();

//     node* newroot = new node<int>(inorderVal[0]);
//     node<int>* curr = newroot;

//     for(int i =1;i<n;i++){
//         node*temp = new node<int>(inorderVal[i]);

//         curr->left = NULL;
//         curr->right = temp;
//         curr = temp;
//     }
//     curr->left = NULL;
//     curr->right = NULL;

//     return newroot;
// }


// int main(){
    
//     return 0;
// }