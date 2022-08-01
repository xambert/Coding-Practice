void swap(TreeNode* root)
    {
        if(root==NULL) return;
        TreeNode* t = root->left;
        root->left = root->right;
        root->right = t;
        swap(root->left);
        swap(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }
