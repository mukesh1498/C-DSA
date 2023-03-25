#include <iostream>
#include <stack>

using namespace std;

class stack
{

    // properties(Data- Member)
    public:
    int *arr;
    int top;
    int size;
    

    // behaivour(constructor)
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << " Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    void peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << " Stack is Empty" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(){

stack st(5);
st.push(22);
st.push(43);
st.push(44);

cout<< st.peek<<endl;

return 0;
};