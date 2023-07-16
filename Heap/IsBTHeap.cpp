#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution {
  public:
  int countnode(struct Node* tree){
    if(tree == NULL){
        return 0;
    }
    
    int ans = 1 + countnode(tree->left) + countnode(tree->right);
    return ans;
}
bool iscbt(struct Node* tree,int i,int cnt){
    if(tree == NULL){
        return true;
    }
    if(i>=cnt){
        return false;
    }
    else{
        bool left = iscbt(tree->left,2*i+1,cnt);
        bool right = iscbt(tree->right,2*i+2,cnt);
        return (left && right);
    }
}

bool maxheap(struct Node* tree){
    if(tree->left == NULL && tree->right == NULL){
        return true;
    }
    if(tree->right == NULL){
        return(tree->data > tree->left->data);
    }
    else{
        bool left = maxheap(tree->left);
        bool right = maxheap(tree->right);
        
        return(left && right &&(tree->data > tree->left->data && tree->data > tree->right->data));
    }
    
}
    bool isHeap(struct Node* tree) {
        int index = 0;
        int totalcount = countnode(tree);
        if(iscbt(tree,index,totalcount) && maxheap(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    
    return 0;
}