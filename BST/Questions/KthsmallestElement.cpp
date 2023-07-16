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

int solve(node* root, int& i, int k){
    if(root == NULL){
        return -1;
    }

    int left = solve(root->left,i,k);
    if(left != -1){
        return left;
    }
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
}
int kthSmallest(node* root, int k) {
    int i=0;
    int ans = solve(root,i,k);
}

int main(){
    
    return 0;
}