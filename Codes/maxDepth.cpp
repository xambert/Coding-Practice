int max_length(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1  + max(max_length(root->left), max_length(root->right));
    }
    int maxDepth(TreeNode* root) {
        int res = max_length(root);
        return res;
    }
