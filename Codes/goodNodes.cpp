void isGood(TreeNode* root, int curr_max)
{
if(root==NULL) return;
curr_max = max(root->val, curr_max);
ans += root->val == curr_max;
isGood(root->left, curr_max);
isGood(root->right, curr_max);
}
int goodNodes(TreeNode* root) {
int curr_max = root->val;
isGood(root, curr_max);
return ans;
    }
