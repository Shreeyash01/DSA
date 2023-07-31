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
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
};
void insertAtPos(Node *head, int a, int pos){
    Node *temp=head;
    Node *n=new Node(a);
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
};

int main() {
    Node *head=NULL;
    
    int n;
    cin>>n;
    
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        insertAtTail(head,val);
    }
    int a;
    cin>>a;
    int pos;
    cin>>pos;
    
    insertAtPos(head,a,pos);   
    
    display(head);
    
    return 0;
}
