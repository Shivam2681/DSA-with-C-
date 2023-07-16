//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};


class Solution
{
public:

    void maximumsum(Node *root,int sum, int &maxsum, int len, int &maxlength){
        if(root == NULL){
            if(len>maxlength){
                maxlength = len;
                maxsum = sum;
            }
            else if(len == maxlength){
                maxsum = max(sum,maxsum);
            }
            return;
        }
        
        sum+= root->data;
        
        maximumsum(root->left,sum,maxsum,len+1,maxlength);
        maximumsum(root->right,sum,maxsum,len+1,maxlength);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
       int len = 0;
       int maxlength = 0;
       
       int sum = 0;
       int maxsum = INT_MIN;
       
       maximumsum(root,sum,maxsum,len,maxlength);
       
       return maxsum;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    // {
    //     string treeString;
    //     getline(cin, treeString);
    //     Node *root = buildTree(treeString);
    //     Solution obj;
    //     int res = obj.sumOfLongRootToLeafPath(root);
    //     cout << res << "\n";
    // }
    return 0;
}
// } Driver Code Ends