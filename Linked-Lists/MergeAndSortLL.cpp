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
Node* insertAtTail() {
    Node* head = NULL;
    int m, val;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
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
    return head;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void selectionSort(Node* head) {
    Node *i=head;
    while(i!=NULL){
        Node *j=i->next;
        while(j!=NULL){
            if(j->data < i->data){
                int d=j->data;
                j->data=i->data;
                i->data=d;
            }
            j=j->next;
        }
        i=i->next;
    }
}
void merge(vector<Node*>& heads) {
    Node* mergedList = NULL;
    
    for (int i = 0; i < heads.size(); i++) {
        Node* temp = mergedList;
        if (!temp) {
            mergedList = heads[i];
        } else {
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = heads[i];
        }
    }
    selectionSort(mergedList);
    display(mergedList);
    
    Node* temp;
    while (mergedList != NULL) {
        temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int j = 0; j < n; j++) {
        vector<Node*> heads;
        for (int k = 0; k < 2; k++) {
            heads.push_back(insertAtTail());
        }
        merge(heads);
        cout << endl;
    }
    return 0;
}
