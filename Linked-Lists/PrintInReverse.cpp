#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        n->next=head;
        head=n;
    }
};
void display_reverse(Node *head, int m)
{
    Node *temp = head;
    for(int k=0; k<m; k++){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    
};

int main() {
    Node *head=NULL;
    
    int n;
    cin>>n;
    
    
    for(int i=0; i<n; i++){
        int m,val;
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>val;
            insertAtHead(head,val);
        }
        display_reverse(head,m);
    }
    return 0;
}
