void leftView(Node* root) {
    if (root->left != NULL) {
        leftView(root->left);
    }
    cout << root->data << " ";
}

void rightView(Node* root) {
    cout << root->data << " ";
    if (root->right != NULL) {
        rightView(root->right);
    }
}

void topView(Node * root) {
    if (root == NULL) {
    return;
    }
    if (root->left != NULL) {
        leftView(root->left);
    }
    cout << root->data << " ";
    if (root->right != NULL) {
        rightView(root->right);
    }
}
