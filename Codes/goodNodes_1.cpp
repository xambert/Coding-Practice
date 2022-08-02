int isGood(TreeNode* root, int curr_max)
{
if(root==NULL) return 0;
curr_max = max(root->val, curr_max);
return (root->val == curr_max) + isGood(root->left, curr_max) + isGood(root->right, curr_max);
}
 int goodNodes(TreeNode* root) {
int curr_max = root->val;
return isGood(root, curr_max);
    }
