/* author : @akash kumar */


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
        while (node != NULL) { 
                cout << node->data <<" "; 
                node = node->next; 
        }  
        cout<<"\n";
} 
/* Function to get the middle of the linked list*/
int getMiddle(Node *head);
int main() 
{ 
        int t;
        cin>>t;
        while(t--)
        {
                int n;
                cin>>n;

                int data;
                cin>>data;
                struct Node *head = new Node(data);
                struct Node *tail = head;
                for (int i = 0; i < n-1; ++i)
                {
                        cin>>data;
                        tail->next = new Node(data);
                        tail = tail->next;
                }
                cout<<getMiddle(head)<<endl;
        }
        return 0; 
} 

// } Driver Code Ends


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   struct Node *ptr1,*ptr2;
   ptr1=head;
   int c=0;
   while(ptr1!=NULL)
   {
       c++;
       ptr1=ptr1->next;
   }
   ptr2=head;
   //return c;
   int cc;
   int dd=1;
   cc=c/2+1;
   while(ptr2!=NULL)
   {
       if(cc==dd)
       {
           return ptr2->data;
       }
       dd++;
       ptr2=ptr2->next;
   }
   return dd;
}
