#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

//Building a tree

Node* buildTree(Node* root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    root = new Node(data);

    if(data == -1)
    return NULL;

    cout << "Enter data for inserting in left of " << data ;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data;
    root->right = buildTree(root->right);

    return root;
}


//level order traversal

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;

            if(!q.empty())
            q.push(NULL);
        }

        else
        {
            cout << temp->data << " ";

            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);
        }
        
    }
}

//inorder traversal--->LNR

void inorder(Node* root)
{
    if(root == NULL)
    return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//preorder traversal--->NLR

void preorder(Node* root)
{
    if(root == NULL)
    return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal--->LRN

void postorder(Node* root)
{
    if(root == NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

//build from level order

void buildlevel(Node* root)
{
    queue<Node*> q;
    int data;
    cout << "Enter data : ";
    cin >> data;

    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        //taking left input
        cout<< "Enter left : ";
        int L;
        cin >> L;

        //creating left node
        if(L != -1)
        {
            temp->left = new Node(L);
            q.push(temp->left);
        }

        //taking right input
        cout<< "Enter right : ";
        int R;
        cin >> R;

        //creating right node
        if(R != -1)
        {
            temp->right = new Node(R);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node* root = NULL;

    buildlevel(root);
    levelOrderTraversal(root);

    root = buildTree(root);

    cout << "Inorder traversal : ";
    inorder(root);

    cout << "Preorder traversal : ";
    preorder(root);

    cout << "Postorder traversal : ";
    postorder(root);

    return 0;
}