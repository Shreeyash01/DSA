#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode;
    while (curr != NULL) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main() {
    int n, m;
    cin >> n;
    vector<Node*> heads;

    for (int j = 0; j < n; j++) {
        Node* head = NULL;
        cin >> m;
        int val;
        for (int i = 0; i < m; i++) {
            cin >> val;
            insertAtTail(head, val);
        }
        heads.push_back(reverse(head));
    }
    for (Node* head : heads) {
        display(head);
        cout << endl;
    }
    return 0;
}
