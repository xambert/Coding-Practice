    bool helper(Node *root, int l = INT_MIN, int r = INT_MAX)
    {
        if(root==nullptr)
        return true;
        int val = root->data;
        return (val<r and val>l) and helper(root->left, l, val) and helper(root->right, val, r);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        return helper(root);
    }
