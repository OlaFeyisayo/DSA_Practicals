#include <iostream>

using namespace std;

//Node structure
struct Node{
  int data;
  Node* left;
  Node* right;

  Node(int value) {
    data = value;
    left = right = nullptr;
  }
};

//Binary Tree class
class BinaryTree {
  private:
    Node* root;

    //count nodes
    int size(Node* node) {
      if (node == nullptr) 
        return 0;
        return 1 + size(node->left) + size(node->right);
    }

    void preOrder(Node* node) {
      if (node == nullptr) return;
      cout << node->data << " ";
      preOrder(node->left);
      preOrder(node->right);
    }

    void inOrder(Node* node) {
      if (node == nullptr) return;
      inOrder(node->left);
      cout << node->data << " ";
      inOrder(node->right);
    }

    void postOrder(Node* node)
    {
      if (node == nullptr) return;
      postOrder(node->left);
      postOrder(node->right);
      cout << node->data << " ";
    }

    public:
     BinaryTree() {
      root = nullptr;
     }

     bool empty() {
      return root == nullptr;
     }

     int size() {
      return size(root);
     }

     Node* insert(Node* node, int value) {
      if (node == nullptr)
        return new Node(value);

        if (value < node->data)
          node->left = insert(node->left, value);
        else 
          node->right = insert(node->right, value);
     }

      void insert(int value) {
        root = insert(root, value);
      } 

      //Taversal calls

      void preOrder() {
        preOrder(root);
        cout << endl;
      }

      void inOrder() {
        inOrder(root);
        cout << endl;
      }

      void postOrder() {
        postOrder(root);
        cout << endl;
      }
};

int main() {
  BinaryTree tree;

  //insert elements
  tree.insert(10);
  tree.insert(15);
  tree.insert(5);
  tree.insert(20);
  tree.insert(3);

  cout << "Tree is empty? " << (tree.empty() ? "Yes" : "No") << endl;

  cout << "Size of tree: " << tree.size() << endl;

  cout << "Pre-order Traversal: ";
  tree.preOrder();

  cout << "In-order Traversal: ";
  tree.inOrder();

  cout << "Post-order Traversal: ";
  tree.postOrder();

  return 0;
}

