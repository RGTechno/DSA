#include <iostream>
using namespace std;

// Input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Preorder traversal (root -> left -> right)

void preorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

// Preorder traversal (left -> root -> right)

void inorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal (left -> right -> root)

void postorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = buildTree();

    // cout << root->data;

    preorder(root); // 1 2 4 5 7 3 6
    cout << endl;

    inorder(root);  // 4 2 7 5 1 3 6
    cout << endl;

    postorder(root);  // 4 7 5 2 6 3 1
    cout<<endl;

    return 0;
}