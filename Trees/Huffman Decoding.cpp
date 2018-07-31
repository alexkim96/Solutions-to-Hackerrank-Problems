void decode_huff(node * root, string s) {
    node* temp = root;
    for (char c : s) {
        temp = c == '1' ? temp->right : temp->left;
        if (temp->data) {
            cout << temp->data;
            temp = root;
        }
    }
}
