int height(Node* root) {
        int left_h = 0;
        int right_h = 0;
        if (root == NULL) {
            return 0;
        }
        if (root->left != NULL) {
            left_h = 1 + height(root->left);
        }
        if (root->right != NULL) {
            right_h = 1 + height(root->right);
        }
        return max(left_h, right_h);
    }
