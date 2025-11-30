#include <iostream>
using namespace std;

// Node of BST
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Insert into BST
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } 
    else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Traversals
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;

    int n, val;
    cout << "How many values to insert? ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "\nInorder (sorted): ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}

// bool search(Node* root, int key) {
//         // Base case: tree is empty or key found
//         if (root == NULL)
//             return false;

//         if (root->data == key)
//             return true;

//         // If key is smaller, search left
//         if (key < root->data)
//             return search(root->left, key);
        
//         // If key is larger, search right
//         return search(root->right, key);
//     }
