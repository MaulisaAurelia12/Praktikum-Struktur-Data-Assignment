#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* root = NULL;

void insertNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL) {
        root = newNode;
    } else {
        Node* current = root;
        Node* parent;

        while (true) {
            parent = current;
            if (data < current->data) {
                current = current->left;
                if (current == NULL) {
                    parent->left = newNode;
                    return;
                }
            } else {
                current = current->right;
                if (current == NULL) {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}

void preOrder(Node* node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(Node* node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(Node* node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    int choice;
    char data;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Pre-Order" << endl;
        cout << "3. In-Order" << endl;
        cout << "4. Post-Order" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                insertNode(data);
                break;
            case 2:
                cout << "Pre-Order: ";
                preOrder(root);
                cout << endl;
                break;
            case 3:
                cout << "In-Order: ";
                inOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "Post-Order: ";
                postOrder(root);
                cout << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
        }
    }

    return 0;
}