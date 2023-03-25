#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *BuildTree(node *root)
{

    cout << " Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data); // isse constructor call hoga

    if (data == -1)
    {
        return NULL;
    }

    cout << " Enter data for inserting in left of " << data << endl;
    root->left = BuildTree(root->left);
    cout << " Enter data for inserting in  right of : " << data << endl;
    root->right = BuildTree(root->right);

    return root;
};

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root); // ek element daldo in root
    q.push(NULL); // JAB BHI HMARA LEVEL COMPLETTE HO JAYE TAB SPERATOR USE KRENGE

    while (!q.empty())
    {
        node *temp = q.front(); // queue ke front udayegi

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

void InOrder(node *root)
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

void PreOrder(node *root)
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
void PostOrder(node *root)
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

void builTreefromLevelOrder(node* &root)
{
    queue<node*> q;
    cout << " Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << " Enter left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << " Enter right node for : " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // creation of tree by builTreefromLevelOrder
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 
    builTreefromLevelOrder(root);
    levelOrderTraversal(root);
   

    // Ctreating a Tree
    // root = BuildTree(root);

    // 3 6 12 -1 -1 13 -1 -1  7 17 -1 -1 -1
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout << " Printing the level order traversal output" << endl;
    // levelOrderTraversal(root);
    // cout << endl;

    // InOrder(root);
    // cout << " InOrder traversal is NLR " << endl;

    // PreOrder(root);
    // cout << " PreOrder traversal is NLR " << endl;

    // PostOrder(root);
    // cout << " PostOrder traversal is NLR " << endl;
};