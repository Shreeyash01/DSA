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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<endl;
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
    display(head);
    
    return 0;
}
