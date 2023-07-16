
// void inorder(TreeNode<int>* root,vector<int> &inorderval){
//         if(root == NULL){
//             return;
//         }
//         inorder(root->left,inorderval);  
//         inorderval.push_back(root->data);
//         inorder(root->right,inorderval);
//     }
// TreeNode<int>* balancedbst(int s,int e, vector<int> &in){
//     if(s>e){
//         return NULL;
//     }

//     int mid = (s+e)/2;

//     TreeNode<int>* root = new TreeNode<int>(in[mid]);
//     root->left = balancedbst(s,mid-1,in);
//     root->right = balancedbst(mid+1,e,in);
//     return root;


// }

// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//      vector<int> inorderval;
//        inorder(root,inorderval);
//        int size = inorderval.size();

//        return balancedbst(0,size-1,inorderval);
// }
