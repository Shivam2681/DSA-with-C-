
// void inorder(TreeNode<int> *root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left,in);
//     in.push_back(root->data);
//     inorder(root->right,in);

// }
/******Merge to sorted arrays*******/
// vector<int> mergearrays(vector<int> &a, vector<int> &b){

//     vector<int> ans(a.size() + b.size());
//     int i=0;
//     int j=0;
//     int k=0;

//     while(i < a.size() && j < b.size()){
//         if(a[i] < b[j]){
//             ans[k++] = a[i];
//             i++;
//         }
//         else{
//             ans[k++] = b[j];
//             j++;
//         }
//     }

//     while(i < a.size()){
//         ans[k++] = a[i];
//         i++;
//     }
//     while(j < b.size()){
//         ans[k++] = b[j];
//         j++;
//     }

//     return ans;
// }
/********Normal BST to Balaced BST********/
// TreeNode<int> * normaltToBST(int s, int e, vector<int> &in){
//     if(s>e){
//         return NULL;
//     }

//     int mid = (s+e)/2;

//     TreeNode<int> * root = new TreeNode<int>(in[mid]);
//     root->left =normaltToBST(s,mid-1,in);
//     root->right =normaltToBST(mid+1,e,in);
//     return root;
// }
// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
//     vector<int> bst1,bst2;
//     inorder(root1,bst1);
//     inorder(root2,bst2);

//     vector<int> mergearray = mergearrays(bst1,bst2);

//     int s=0;
//     int e = mergearray.size()-1;

//     return normaltToBST(s,e,mergearray);
// }


/*****convert BST into Sorted Doubly linked list******/

// void convertintoSortedDLL(TreeNode<int> *root,TreeNode<int> * &head){
//         if(root == NULL){
//             return;
//         }
//         convertintoSortedDLL(root->right,head);
//         root->right = head;
//         if(head !=NULL){
//             head->left = root;
//         }
//         head = root;
//         convertintoSortedDLL(root->left,head);
        
//     }

/******* Merge Two Sorted Doubly linked list*******/

//     TreeNode<int> * mergelinkedlist(TreeNode<int> *head1, TreeNode<int> *head2){
//         TreeNode<int> * head = NULL;
//         TreeNode<int> * tail = NULL;
        
//         while(head1 != NULL && head2 != NULL){
//             if(head1->data < head2->data){
//                 if(head == NULL){
//                     head = head1;
//                     tail = head1;
//                     head1 = head1->right;
//                 }
//                 else{
//                     tail->right = head1;
//                     head1->left = tail;
//                     tail = head1;
//                     head1 = head1->right;
//                 }
//             }
//             else{
//                 if(head == NULL){
//                     head = head2;
//                     tail = head2;
//                     head2 = head2->right;
//                 }
//                 else{
//                     tail->right = head2;
//                     head2->left = tail;
//                     tail = head2;
//                     head2 = head2->right;
//                 }
//             }
//         }
//         while(head1 != NULL){
//             tail->right = head1;
//             head1->left = tail;
//             tail = head1;
//             head1 = head1->right;
//         }
//          while(head2 != NULL){
//             tail->right = head2;
//             head2->left = tail;
//             tail = head2;
//             head2 = head2->right;
//         }
        
//         return head;
//     }

/****Count No of nodes In LINked list******/    

//     int countofnodes(TreeNode<int> *head){
//         int cnt = 0;
//         TreeNode<int> * temp = head;
//         while(temp != NULL){
//             cnt++;
//             temp = temp->right;
//         }
//         return cnt;
//     }

/******* sorted linkedlist into BST*********/

//     TreeNode<int> * sortedLLtoBST(TreeNode<int> * head,int n){
//         if(n<=0 && head == NULL){
//             return NULL;
//         }
//         TreeNode<int> * left = sortedLLtoBST(head,n/2);
//         TreeNode<int> * root = head;
//         root->left = left;
//         head = head->right;
        
//         root->right = sortedLLtoBST(head,((n-n/2)-1));
//         return root;
//     }
// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
//     // vector<int> bst1,bst2;
//     // inorder(root1,bst1);
//     // inorder(root2,bst2);

//     // vector<int> mergearray = mergearrays(bst1,bst2);

//     // int s=0;
//     // int e = mergearray.size()-1;

//     // return normaltToBST(s,e,mergearray);
//        TreeNode<int> * head1 = NULL;
//        convertintoSortedDLL(root1,head1);
//        head1->left = NULL;
       
//        TreeNode<int> * head2 = NULL;
//        convertintoSortedDLL(root2,head2);
//        head2->left = NULL;
       
//        TreeNode<int> * head = mergelinkedlist(head1,head2);
       
//         return sortedLLtoBST(head,countofnodes(head));
// }