bool Valid(TreeNode* root, long long left, long long right)
{
    if(!root) return true;
    if(!( (root->val > left) and (root->val < right))) return false;
    return Valid(root->left, left, root->val) and Valid(root->right, root->val, right);
}
bool isValidBST(TreeNode* root)
{
    return Valid(root, LONG_LONG_MIN, LONG_LONG_MAX);
}
