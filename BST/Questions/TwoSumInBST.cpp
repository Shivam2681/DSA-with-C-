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


void inorder(node* root, vector<int>&inorderVal){
    if(root == NULL){
        return;
    }
    inorder(root->left,inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right,inorderVal);
}
bool twoSumInBST(node* root, int target) {
	vector<int> inorderVal;
    inorder(root,inorderVal);
    int i=0, j = inorderVal.size()-1;
    while(i<j){
         int sum = inorderVal[i] + inorderVal[j];
         if(sum == target){
             return true;
         }
         else if(sum>target){
             j--;
         }
         else{
             i++;
         }
    }
    return false;
}

int main(){
    
    return 0;
}