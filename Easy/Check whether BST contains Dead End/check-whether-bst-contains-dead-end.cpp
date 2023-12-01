//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


// } Driver Code Ends
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
class Solution{
  public:   
    // Get all leafs nodes one of them is our Answer
    void getLeafs(Node* root, vector<int> &leafs) {
        if(!root) return;
        
        if(!root->left && !root->right)
            leafs.push_back(root->data);
        
        getLeafs(root->left, leafs);
        getLeafs(root->right, leafs);
    }
    
    //Check for the DeadEnd node(node+1, node-1);
    bool isPresent(Node* root, int data) {
        if(!root) return false;
        
        if(data < root->data) {
            isPresent(root->left, data);
        }else if(data > root->data) {
            isPresent(root->right, data);
        }else {
            return true;
        }
    }
  
    bool isDeadEnd(Node *root)
    {
        vector<int> leafs;
        getLeafs(root, leafs);
        
        for(int leaf: leafs) {
            if(leaf == 1) return true;
            if(isPresent(root, leaf - 1) && 
            isPresent(root, leaf + 1)) return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
// bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

     Solution ob;
     cout<<ob.isDeadEnd(root);
     cout<<endl;
    }
}


// } Driver Code Ends