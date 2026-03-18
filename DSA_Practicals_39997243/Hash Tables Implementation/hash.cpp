#include <iostream>
using namespace std;

class HashTable {
  private:
    static const int SIZE = 10;
    int keys[SIZE];
    string values[SIZE];
    bool isOccupied[SIZE];
    int count;

    //hash function
    int hashFunction(int key) {
      return key % SIZE;
    }

  public: 
  //createTable()
   HashTable() {
    count = 0;
    for (int i = 0; i < SIZE; i++) {
      isOccupied[i] = false;
    }
   }

   //isEmpty()
    bool isEmpty() {
    return (count == 0);
    }

    //tableLength()
    int tbleLength() {
      return count;
    }

    //Insert(newItem)
    void Insert(int key, string value) {
      if (count == SIZE) {
        cout << "Hash Table is full, you cannot insert a new item." << endl;
        return;
      }

      int index = hashFunction(key);

      //linear probing
      while (isOccupied[index]) {
        index = (index + 1) % SIZE;
      }
      keys[index] = key;
      values[index] = value;
      isOccupied[index] = true;
      count++;

      cout << "Item inserted." << endl;
    }

    //Delete(searchKey)
    void Delete(int key) {
      int index = hashFunction(key);
      int startIndex = index;

      while  (isOccupied[index]) {
        if (keys[index] == key) {
          isOccupied[index] = false;
          count--;
          cout << "Item deleted." << endl;
          return;
        }
        index = (index + 1) % SIZE;

        if (index == startIndex)
          break;
      }

      cout << "Key not found!" << endl;

    }

    //Retrieve(searchKey)
};
