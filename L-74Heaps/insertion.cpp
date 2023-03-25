#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    { // constructor
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val; // is index pr value insert krdi

        while (index > 1)
        { // tree min 1 level ka hona chaiye
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };

    // Delete from Heap
    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing for delete " << endl;
        }

        // step:1 put last element into first index
        arr[1] = arr[size];

        // step2: remove last element
        size--;

        // step3: take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

// CONVERT ARRAY INTO MAX,OR MIN HEAP
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    { //
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{

    int size = n;

    while (size > 1)
    { // min 1 root hona chaiye

        // step1. swap first root and last root
        swap(arr[size], arr[1]); // 1 esiye kiyoki 1 index se start kiya h
        size--;

        // step2.
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(30);
    h.insert(34);
    h.insert(32);
    h.insert(37);
    h.insert(38);
    h.insert(31);
    h.print();

    h.deletefromheap();
    h.deletefromheap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // heap creation by using array
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << " Printing the array row: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap sorting
    heapSort(arr, n);
    cout << " Printing sorted heap: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}