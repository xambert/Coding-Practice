bool isSame(TreeNode* p, TreeNode* q)
{
	if(p==NULL and q==NULL) return true;
	if(p==NULL or q==NULL) return false;
	return p->val==q->val and isSame(p->left, q->left) and isSame(p->right, q->right);
}
bool isSubtree(TreeNode* root, TreeNode* subRoot) 
{
stack<TreeNode*> stk;
	stk.push(root);
    bool flag = false;
	while(!stk.empty())
	{
		TreeNode* temp = stk.top();
        stk.pop();
		if(temp->val == subRoot->val)
			flag |= isSame(temp, subRoot);
        if(flag) return flag;
		if(temp->left) stk.push(temp->left);
		if(temp->right) stk.push(temp->right);
	}
	return false;
}
