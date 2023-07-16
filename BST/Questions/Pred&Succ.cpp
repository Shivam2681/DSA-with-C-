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

pair<int,int> predecessorSuccessor(node* root, int key)
{
    node* temp = root;
    int pred = -1;
    int succ = -1;

    while(temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }
    node* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    node* righttree = temp->right;
    while(righttree != NULL){
        succ = righttree->data;
        righttree = righttree->left;
    }
    pair<int,int> ans = make_pair(pred,succ);
    return ans;
}


int main(){
    
    return 0;
}