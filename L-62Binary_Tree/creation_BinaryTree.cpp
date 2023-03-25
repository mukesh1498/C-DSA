#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)  // Consructor
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int main(){

};