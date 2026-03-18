#include <iostream>

using namespace std;

    void bubbleSort(int a[], int n) { 
      for (int i = n-1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
          if (a[j-1] > a[j]) {
             swap(a[j], a[j-1]);
          }
        }
      }
   }
 
   void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
   }

   int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* a = new int[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
      cin >> a[i];

    }

    bubbleSort(a, n);

    cout << "Sorted array: ";
    printArray(a, n);

    delete[] a;
    return 0;
   }