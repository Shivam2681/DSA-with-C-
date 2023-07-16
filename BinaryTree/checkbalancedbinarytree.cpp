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

int height(node* root){
    if(root == NULL){
        return -1;
    }
    
    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left,right) + 1;
    return ans;
}
bool isBalancedBT(node* root) {
    if(root == NULL){
        return true;
    }
    
    bool left = isBalancedBT(root->left);
    bool right = isBalancedBT(root->right);
    bool diff = abs(height(root->left)-height(root->right)) <=1;
    
    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}

pair<bool,int> isbalanced(node* root){
    if(root == NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    pair<int,int> left = isbalanced(root->left);
     pair<int,int> right = isbalanced(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diff = abs(left.second - right.second) <=1;
    pair<bool,int>ans;
    ans.second = max(left.second,right.second)+1;
    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}
bool isBalancedBT(node* root) {
    return isbalanced(root).first;
}

int main(){
    
    return 0;
}