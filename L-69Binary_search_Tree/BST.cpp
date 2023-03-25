#include <iostream>
#include <queue>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void InOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
};

void PreOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
};
void PostOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root); // ek element daldo in root
    q.push(NULL); // JAB BHI HMARA LEVEL COMPLETTE HO JAYE TAB SPERATOR USE KRENGE

    while (!q.empty())
    {
        Node *temp = q.front(); // queue ke front udayegi

        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()) // queue still has some child nodes(queue abhi tak empty nhi h)
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
};

Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        // right part me ajo
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node *minValue(Node* root)
{
    Node*  temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
};

Node *MaxValue(Node* root)
{
    Node* temp = root;

    while (temp != NULL)
    {
        temp = temp->right;
    }
    return temp;
};
int main()
{
    Node *root = NULL;
    cout << " Enter the value to createnewBST " << endl;
    takeInput(root);
    cout << " print the BST " << endl;
    levelOrderTraversal(root);

    cout << " inOrder wise  print " << endl;
    InOrder(root);

    cout << " preOrder wise  print " << endl;
    PreOrder(root);

    cout << " postOrder wise  print " << endl;
    PostOrder(root);

   cout<<endl;
    cout << " minvaluve of Bst is : " << minValue(root)->data<<endl;
    cout << " maxvalue of BST : " << MaxValue(root)->data <<endl;

    return 0;
}