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
Node *insertNode()
{
    int n, data;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data: ";
        cin >> data;
        Node *n = new Node(data);
        if (root == NULL)
        {
            root = n;
        }
        else
        {
            Node *temp = root;
            while (temp != NULL)
            {
                if (temp->data > data)
                {
                    if (temp->left == NULL)
                    {
                        temp->left = n;
                        break;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else
                {
                    if (temp->right == NULL)
                    {
                        temp->right = n;
                        break;
                    }
                    else
                    {
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
    preOrderTree(insertNode());

    return 0;
}
