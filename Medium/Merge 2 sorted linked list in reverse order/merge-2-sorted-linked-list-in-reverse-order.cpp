//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    Node *head=NULL;
    void insert_first(struct Node * node,int data){
        struct Node *n=new Node;
        n->data=data;
        n->next=head;
        head=n;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        while(node1 && node2){
            if(node1->data <= node2->data){
                insert_first(node1,node1->data);
                node1=node1->next;
            }
            else{
                insert_first(node2,node2->data);
                node2=node2->next;
            }
        }
        if(node1){
            while(node1){
                insert_first(node1,node1->data);
                node1=node1->next;
            }
        }
        else{
            while(node2){
                insert_first(node2,node2->data);
                node2=node2->next;
            }
        }
       return head; 
    }  
};




//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends