#include <iostream>

using namespace std;

  void selectionSort(int a[], int n) {
    for(int i = n - 1; i >= 0; i--) {
      int max = i;
      for (int j = 0; j < i; j++) {
        if (a[j] >= a[max]) {
          max = j;
        }
      }

          //swap max value with ith value
          int temp = a[i];
          a[i] = a[max];
          a[max] = temp;  
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

  selectionSort(a, n);

  cout << "Sorted array: ";
  printArray(a, n);

  delete[] a;
  return 0;

}


