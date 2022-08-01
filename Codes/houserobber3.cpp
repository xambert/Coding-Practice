vector<int> findamount(TreeNode *root)
{
if(root == NULL) return {0,0};
vector<int> amt(2,0), left(2,0), right(2,0);
left = findamount(root->left);
right = findamount(root->right);
amt[0] = root->val + left[1] + right[1]; // withroot
amt[1] = max(left[0], left[1]) + max(right[0], right[1]);
return amt;
}
int rob(TreeNode *root)
{
vector<int> res = findamount(root);
return max(res[0], res[1]);
}
