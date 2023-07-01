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
    cout << " Enter data : ";
    cin >> data;

    root = new Node(data);

    if(data == -1)
    return NULL;

    cout << "For left of " << data ;
    root->left = buildTree(root->left);

    cout << "For right of " << data;
    root->right = buildTree(root->right);

    return root;
}

vector<int> topView(Node* root)
{
    vector<int> ans;

    if(root == NULL)
    return ans;

    map<int, int> topNode;
    queue< pair< Node*, int>> q;

    q.push(make_pair(root, 0));

    while(!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        topNode[hd] = frontNode->data;

        if(frontNode->left)
        q.push(make_pair(frontNode->left, hd-1));

        if(frontNode->right)
        q.push(make_pair(frontNode->right, hd+1));
    }
    for(auto i : topNode) {
        ans.push_back(i.second);
    }
    return ans;
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);

    vector<int> answer = topView(root);

    cout << "\nBottom View of the Tree--->" << endl;
    
    for(int i : answer){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}