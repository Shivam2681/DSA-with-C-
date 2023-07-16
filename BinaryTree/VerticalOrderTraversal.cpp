//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map<int,map<int,vector<int>>> nodes;
        queue<pair<Node*,pair<int,int>>> q;
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*,pair<int,int>> temp = q.front();
            q.pop();
            
            Node*frontnode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;
            
            nodes[hd][level].push_back(frontnode->data);
            
            if(frontnode->left){
                q.push(make_pair(frontnode->left,make_pair(hd-1,level+1)));
            }
            if(frontnode->right){
                q.push(make_pair(frontnode->right,make_pair(hd+1,level+1)));
            }
        }
        for(auto i:nodes){
            for(auto j: i.second){
                for(auto k: j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        // string c;
        // getline(cin,c);
        Solution obj;
    	// Node* root = buildTree(s);
    	
    	// vector <int> res = obj.verticalOrder(root);
    	// for (int i : res) cout << i << " ";
        // cout << endl;
    }
	return 0;
}



// } Driver Code Ends