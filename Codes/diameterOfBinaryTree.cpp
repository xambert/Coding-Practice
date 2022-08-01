   int diameter = 0;
   int maxdepth(TreeNode* root)
    {
    if(root==NULL) return 0;
    int l = maxdepth(root->left);
    int r = maxdepth(root->right);
    diameter = max(diameter, l + r);
    return max(l,r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int res = maxdepth(root);
        return diameter;
    }
