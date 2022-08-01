bool isSame(TreeNode* p, TreeNode* q)
{
	if(p==NULL and q==NULL) return true;
	if(p==NULL or q==NULL) return false;
	return p->val==q->val and isSame(p->left, q->left) and isSame(p->right, q->right);
}
bool isSubtree(TreeNode* root, TreeNode* subRoot) 
{
    if(root==NULL) return false;
    if(isSame(root, subRoot)) return true;
    return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
}
