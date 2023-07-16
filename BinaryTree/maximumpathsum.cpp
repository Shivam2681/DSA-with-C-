//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



// } Driver Code Ends
// User Fuction template for C++

class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int maxpath(Node* root,int &maxi){
        if(root== NULL){
            return 0;
        }
        
        int leftsum = max(0,maxpath(root->left,maxi));
        int rightsum = max(0,maxpath(root->right,maxi));
        
        maxi = max(maxi,leftsum + rightsum + root->data);
        
        return root->data + max(leftsum,rightsum);
    }
    int findMaxSum(Node* root)
    {
        int maxi = INT_MIN;
         maxpath(root,maxi);
         return maxi;
        
    }
};

//{ Driver Code Starts.


int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        //Node *root = buildTree(treeString);
        //cout << ob.findMaxSum(root) << "\n";

    }


    return 0;
}
// } Driver Code Ends