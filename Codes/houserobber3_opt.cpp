pair<int,int> findamount(TreeNode *root)
{
if(root == NULL) return make_pair(0,0);
pair<int,int> left = findamount(root->left);
pair<int,int> right = findamount(root->right);
int amt0 = root->val + left.second + right.second; // withroot
int amt1 = max(left.first, left.second) + max(right.first, right.second);
return make_pair(amt0, amt1);
}
int rob(TreeNode *root)
{
pair<int,int> res = findamount(root);
return max(res.first, res.second);
}
