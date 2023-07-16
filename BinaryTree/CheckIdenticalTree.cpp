#include<iostream>
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

bool identicalTrees( node* root1,  node* root2) {
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL && root2 != NULL){
        return false;
    }
    if(root1 !=NULL && root2 == NULL){
        return false;
    }
    
    bool left = identicalTrees(root1->left,root2->left);
    bool right = identicalTrees(root1->right,root2->right);
    
    bool value = root1->data == root2->data;
    
    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    return 0;
}