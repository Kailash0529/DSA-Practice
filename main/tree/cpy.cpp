#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* build() {
    int data;
    cout << "Enter data (or -1 to stop): ";
    cin >> data;
    if (data == -1)
        return nullptr;

    node* root = new node(data);

    cout << "Enter the left node for " << data << ": ";
    root->left = build();

    cout << "Enter the right node for " << data << ": ";
    root->right = build();

    return root;
}

int main() {
    node* root = nullptr;
    root = build();

    // Now you can perform operations on the constructed tree
    return 0;
}
