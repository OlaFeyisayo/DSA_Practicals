#include <iostream>
using namespace std;

#define MAX 5


int queueArr[MAX];
int front = 0;
int rear = 0;

void enqueue(int value) {
    if (rear == MAX) {
        cout << "Queue Overflow" << endl;
        return;
    }
    queueArr[rear] = value;
    rear++;
    cout << value << " inserted into queue" << endl;
}


int listArr[MAX] = {10, 20, 30, 40, 50};
int listSize = 5;

void deleteFromList(int pos) {
    if (pos < 0 || pos >= listSize) {
        cout << "Invalid position" << endl;
        return;
    }
    for (int i = pos; i < listSize - 1; i++) {
        listArr[i] = listArr[i + 1];
    }
    listSize--;
    cout << "Element deleted from position " << pos << endl;
}

void findPosition(int value) {
    for (int i = 0; i < listSize; i++) {
        if (listArr[i] == value) {
            cout << "Item " << value << " found at position " << i << endl;
            return;
        }
    }
    cout << "Item not found in list" << endl;
}


int stackArr[MAX];
int top = -1;

void isStackEmpty() {
    if (top == -1)
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is NOT Empty" << endl;
}


int main() {

    // Queue insertion
    enqueue(5);
    enqueue(10);
    enqueue(15);

    // Check if stack is empty
    isStackEmpty();

    // Delete from list
    deleteFromList(2);   // deletes 30

    // Get position of an item
    findPosition(40);

    return 0;
}
