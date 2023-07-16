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

// T.C = O(n2)
int height(node *root){
    if(root == NULL){
        return -1;
    }
    
    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left,right) +1;
    return ans;
}
int diameterOfBinaryTree(node *root)
{
	if(root == NULL){
        return -1;
    }
    
    int opt1 = diameterOfBinaryTree(root->left);
    int opt2 = diameterOfBinaryTree(root->right);
    int opt3 = height(root->left) + height(root->right) +1;
    
    int ans = max(opt1,max(opt2,opt3));
    return ans;
}
// T.C = O(n)
pair<int,int> diameterFast(node *root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(-1,-1);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = (left.second + right.second) + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));;
        ans.second = max(left.second , right.second) + 1;

        return ans;
 }

int main(){
    
    return 0;
}