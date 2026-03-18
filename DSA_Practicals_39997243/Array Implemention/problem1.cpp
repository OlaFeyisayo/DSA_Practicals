#include <iostream> 
using namespace std;

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; //declare array 

    cout << "Enter " << n << " integers: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the integer to search: ";
    cin >> key;

    int count = 0;
    int lastPosition = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
          count++;
          lastPosition = i; //update when key is found
        }
    }

    if(count > 0) {
      cout << "Number of times " << key << " appears: " << count << endl;
      cout << "Last position: " << lastPosition << endl;
    } else {
      cout << key << " integer not found in the array." << endl;
    }
    return 0;
    }
