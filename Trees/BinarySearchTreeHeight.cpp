#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int heightTree(Node *root){
    if (root == NULL){
        return -1;
    }
    int height = 0;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *node = q.front();
        q.pop();
        if(node != NULL){
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            height++;
        }
    }
    return height;
}
Node *insertNode(){
    int n, data;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *root = NULL;
    for (int i = 0; i < n; i++){
        cout << "Enter data: ";
        cin >> data;
        Node *n = new Node(data);
        if (root == NULL){
            root = n;
        }else{
            Node *temp = root;
            while (temp != NULL){
                if (temp->data > data){
                    if (temp->left == NULL){
                        temp->left = n;
                        break;
                    }else{
                        temp = temp->left;
                    }
                }else{
                    if (temp->right == NULL){
                        temp->right = n;
                        break;
                    }else{
                        temp = temp->right;
                    }
                }
            }
        }
    }
    return root;
}

int main()
{   
    int height = heightTree(insertNode());
    cout<<"Height of Binary Tree : "<<height;

    return 0;
}
