TreeNode* invert(TreeNode* root)
    {
        if(root==NULL) return root;
        TreeNode* temp = root->left;
        root->left = invert(root->right);
        root->right = invert(temp);
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }



