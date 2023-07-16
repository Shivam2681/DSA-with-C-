#include<iostream>
#include<queue>
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

node* insertIntoBST(node*root,int d){

    if(root == NULL){
        root = new node(d);
        return root;
    }
    
    if(d > root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

node*minVal(node*root){
    node*temp = root;

    if(temp!=NULL){
        temp = temp->left;
    }
    return temp;
}

node*maxVal(node*root){
    node*temp = root;

    if(temp!=NULL){
        temp = temp->right;
    }
    return temp;
}

node* deletefromBST(node*root,int val){
    if(root->data == NULL){
        return root;
    }
    if(root->data == val){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left != NULL && root->right == NULL){
            node*temp = root->left;
            delete root;
             return temp;
        }
        if(root->left == NULL && root->right != NULL){
            node*temp = root->right;
            delete root;
            return temp;
        }
        if(root->left != NULL && root->right != NULL){
            int min = minVal(root->right)->data;
            root->data =min;
            root->right = deletefromBST(root->right,min);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right = deletefromBST(root->right,val);
        return root;
    }
}

void takeinput(node*&root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelorderTraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main(){
    node*root = NULL;
    cout<<"enter data";
    takeinput(root);
    cout<<"printing bst";
    levelorderTraversal(root);
    return 0;
}