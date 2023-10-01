/*Create a Binary Search Tree which supports the following operations:
◦ insert(tree, element) – adds the node specified by element (which contains the data) 
into the BST specified by tree.
◦ search(tree, key) – searches for the data specified by key in the BST specified by 
tree.
◦ delete(tree, element) – removes the node specified by element from the BST 
specified by
◦ tree.
◦ inorder(tree) – To do a recursive inorder traversal of the BST.
◦ preorder(tree) – To do a recursive preorder traversal of the BST.
◦ postorder(tree) – To do a recursive postorder traversal of the BST.
Write a menu driven program to demonstrate these operations.*/

#include <iostream>
using std::endl,std::cout,std::cin;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* root, int element) {
        if (root == nullptr) {
            return new Node(element);
        }

        if (element < root->data) {
            root->left = insert(root->left, element);
        } else if (element > root->data) {
            root->right = insert(root->right, element);
        }

        return root;
    }

    bool search(Node* root, int key) {
        if (root == nullptr) {
            return false;
        }

        if (root->data == key) {
            return true;
        } else if (key < root->data) {
            return search(root->left, key);
        } else {
            return search(root->right, key);
        }
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* root, int element) {
        if (root == nullptr) {
            return root;
        }

        if (element < root->data) {
            root->left = deleteNode(root->left, element);
        } else if (element > root->data) {
            root->right = deleteNode(root->right, element);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }

        return root;
    }

    void inorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        std::cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        std::cout << root->data << " ";
    }

public:
    BST() : root(nullptr) {}

    void insert(int element) {
        root = insert(root, element);
    }

    bool search(int key) {
        return search(root, key);
    }

    void deleteNode(int element) {
        root = deleteNode(root, element);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        std::cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    BST bst;
    int choice, element;

    do {
        cout << "Menu:"<<endl;
        cout << "1. Insert"<<endl;
        cout << "2. Search"<<endl;
        cout << "3. Delete"<<endl;
        cout << "4. Inorder Traversal"<<endl;
        cout << "5. Preorder Traversal"<<endl;
        cout << "6. Postorder Traversal"<<endl;
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                bst.insert(element);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> element;
                if (bst.search(element)) {
                    cout << "Element found."<<endl;
                } else {
                    cout << "Element not found."<<endl;
                }
                break;
            case 3:
                cout << "Enter element to delete: ";
                cin >> element;
                bst.deleteNode(element);
                break;
            case 4:
                cout << "Inorder Traversal: ";
                bst.inorder();
                break;
            case 5:
                cout << "Preorder Traversal: ";
                bst.preorder();
                break;
            case 6:
                cout << "Postorder Traversal: ";
                bst.postorder();
                break;
            case 7:
                cout << "Exiting program."<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    } while (choice != 7);

    return 0;
}
