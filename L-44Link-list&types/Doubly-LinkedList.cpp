#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val= this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< " memory free for node with data :  " << val<<endl;
 
    }
};

// traverse linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

// gives length of Linked List
int getlenth(Node *head)
{

    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAttail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
};

void insertAtAnyPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at end/tail position
    if (temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
};


void deleteNode(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev =NULL;
        head = head->next;


        // memory free start node by using destructor
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->next =NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
};

int main()
{
    Node *node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    //  cout << " length of linked list  node is : " << getlenth(head) <<endl;

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);

    insertAtHead(head, 18);
    print(head);

    insertAtHead(head, 6);
    print(head);

    insertAttail(tail, 90);
    print(head);

    insertAtAnyPosition(tail, head, 7, 729);
    print(head);

    insertAtAnyPosition(tail, head, 4, 449);
    print(head);

cout<<endl;
cout << " after deletion in Linked List using destructor"<<endl;
  cout<<endl;
    deleteNode(1,head);
    print(head);
    return 0;
}