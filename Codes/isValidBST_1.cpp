bool isValidBST(TreeNode* root)
{
    stack<TreeNode*> s;
    TreeNode* prev = NULL;
    TreeNode* curr = root;
    while(curr or !s.empty())
    {
        while(curr) { s.push(curr); curr = curr->left;}
        curr = s.top();
        s.pop();
        if(prev and prev->val >= curr->val) return false;
        prev = curr;
        curr = curr->right;
    }
    return true;
}
