#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrderTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTree(root->left);
    preOrderTree(root->right);
}
void inOrderTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTree(root->left);
    cout << root->data << " ";
    inOrderTree(root->right);
}
void postOrderTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTree(root->left);
    postOrderTree(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre Order - " << endl;
    preOrderTree(root);
    cout << endl
         << "In Order - " << endl;
    inOrderTree(root);
    cout << endl
         << "Post Order - " << endl;
    postOrderTree(root);

    return 0;
}
