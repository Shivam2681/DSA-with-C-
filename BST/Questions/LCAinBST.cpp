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


node* LCAinaBST(node* root, node* P, node* Q)
{
	if(root == NULL){
        return NULL;
    }
    if(root->data > P->data && root->data > Q->data){
        return LCAinaBST(root->left ,P,Q);
    }
    if(root->data < P->data && root->data < Q->data){
        return LCAinaBST(root->right ,P,Q);
    }
    else{
        return root;
    }
}      


int main(){
    
    return 0;
}