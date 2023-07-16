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

bool searchInBST(node*root, int x) {
     node*temp = root;

     while(temp != NULL){
          if(temp->data == x){
              return true;
          }
          if(temp->data > x){
              temp = temp->left;
          }
          else{
              temp = temp->right;
          }
     }
     return false;
}

bool searchInBST(node*root, int x) {
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        return searchInBST(root->left,x);
    }
    else{
        return searchInBST(root->right,x);
    }
}

int main(){
    
    return 0;
}