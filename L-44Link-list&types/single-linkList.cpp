#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data is : " << value << endl;
    }
};

// node bna kr head pr insert kr di
void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

// node bna kr tail pr insert krdo
void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
};

void insrtAtPosition(Node *&tail, Node *&head, int position, int d)
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
        inserAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
};

void deleteNode(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
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

        while (cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10); // constructor
                                // cout << "node ka data : " << node1->data << endl;
                                // cout << " node ka next data address : " << node1->next << endl;

    // head pointed to node1
    Node *head = node1; // for head

    Node *tail = node1; // for insert at end on tail

    print(head);
    //  insertAtHead(head, 12);
    inserAtTail(tail, 28);

    print(head);
    inserAtTail(tail, 22);
    //  insertAtHead(head, 15);
    print(head);

    insrtAtPosition(tail, head, 1, 56);
    print(head);

    cout << " head kahan pr h :" << head->data << endl;
    cout << " tail ka data kahn konsa : " << tail->data << endl;

    deleteNode(3, head);
    print(head);

    return 0;
};