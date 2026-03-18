#include <iostream> 

using namespace std;

  void insertionSort(int a[], int n){  
      for (int i = 1; i < n; i++) {
        int next = a[i]; 
        int j;

        for (j = i-1; j >= 0 && a[j] > next; j--) {
          a[j+1] = a[j];
        }

        a[j+1] = next;
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

    insertionSort(a, n);

    cout << "Sorted array: ";
    printArray(a, n);

    delete[] a;
    return 0;
  } 