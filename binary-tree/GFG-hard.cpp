// include <bits/stdc++.h>
// using namespace std;

// struct node {
//     int data;
//     node *left, *right;
// };

// node* newNode(int data) {
//     node* temp = new node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// int search(int arr[], int x, int n) {
//     for (int i = 0; i < n; i++)
//         if (arr[i] == x)
//             return i;
//     return -1;
// }

// node* buildTree(int in[], int pre[], int inStrt, int inEnd, int &pIndex) {
//     if (inStrt > inEnd)
//         return NULL;

//     node* tNode = newNode(pre[pIndex++]);

//     if (inStrt == inEnd)
//         return tNode;

//     int inIndex = search(in, tNode->data, inEnd + 1);

//     tNode->left = buildTree(in, pre, inStrt, inIndex - 1, pIndex);
//     tNode->right = buildTree(in, pre, inIndex + 1, inEnd, pIndex);

//     return tNode;
// }

// void printPostorder(node* node) {
//     if (node == NULL)
//         return;

//     printPostorder(node->left);
//     printPostorder(node->right);
//     cout << node->data << " ";
// }

// int main() {
//     int in[] = {1, 6, 8, 7};
//     int pre[] = {1, 6, 7, 8};
//     int n = sizeof(in) / sizeof(in[0]);
//     int pIndex = 0;
//     node* root = buildTree(in, pre, 0, n - 1, pIndex);
//     cout << "Postorder traversal of the constructed tree: \n";
//     printPostorder(root);
//     return 0;
// }


#include <iostream>
#include <unordered_map>

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int data) {
    Node *node = new Node;
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

Node* buildTree(int preorder[], int inorder[], int n, int &preIndex, int inStrt, int inEnd, unordered_map<int, int> &map) {
    if (inStrt > inEnd) {
        return nullptr;
    }

    Node *node = newNode(preorder[preIndex++]);

    if (inStrt == inEnd) {
        return node;
    }

    int inIndex = map[node->data];
    node->left = buildTree(preorder, inorder, n, preIndex, inStrt, inIndex - 1, map);
    node->right = buildTree(preorder, inorder, n, preIndex, inIndex + 1, inEnd, map);
    return node;
}

void printPostorder(Node *root) {
    if (root == nullptr) {
        return;
    }

    printPostorder(root->left);
    printPostorder(root->right);
    std::cout << root->data << " ";
}

int main() {
    int inorder[] = {1, 6, 8, 7};
    int preorder[] = {1, 6, 7, 8};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[inorder[i]] = i;
    }

    int preIndex = 0;
    Node *root = buildTree(preorder, inorder, n, preIndex, 0, n - 1, map);
    std::cout << "Postorder traversal of the constructed tree: ";
    printPostorder(root);
    return 0;
}
