#include <iostream>
using namespace std;

#define MAX 5 

//queue insertion implementation
 int queue[MAX];
 int top = 0, bottom = 0;

 //check if queue is empty 
    bool empty() {
      return top == bottom;
    }
    //return size of queue
    int size() {
      return bottom - top;
    }

    //insert element into queue
    void enqueue(int value) {
      if (bottom == MAX) {
        cout << "Queue is full" << endl;
        return;
      }
      queue[bottom] = value;
      bottom++;
      cout << value << "Enqueued" << endl;
    }

    //remove element from queue
    void dequeue() {
     if (empty()) {
      cout << "Queue is empty" << endl;
      return;
     }
     cout << queue[top] << "Dequeued" << endl;
     top++;

    }

int main() {
  enqueue(10);
  enqueue(20);
  enqueue(30);
  cout << "Queue size: " << size() << endl;
  dequeue();
  cout << "Queue size: " << size() << endl;
  return 0;
}
  
    

