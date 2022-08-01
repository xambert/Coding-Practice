bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL) return true;
        if(p==NULL or q==NULL) return false;
        return p->val == q->val and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    }
