#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
void insertAthead(Node *&head, int val)
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
        insertAthead(head,val);
    }
    display(head);
    return 0;
}
