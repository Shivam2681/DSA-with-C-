#include<iostream>
#include<vector>
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

void traversalleft(node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traversalleft(root->left,ans);
    }
    else{
        traversalleft(root->right,ans);
    }
}

void traversalleaf(node* root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return;
    }
    traversalleaf(root->left,ans);
    traversalleaf(root->right,ans);
}

void traversalright(node* root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    
    if(root->right){
        traversalright(root->right,ans);
    }
    else{
        traversalright(root->left,ans);
    }
    ans.push_back(root->data);
    
}
vector<int> traverseBoundary(node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root->data);
    
    traversalleft(root->left,ans);
    
    traversalleaf(root->left,ans);
    
    traversalleaf(root->right,ans);
    
    traversalright(root->right,ans);
    return ans;
}

int main(){
    
    return 0;
}