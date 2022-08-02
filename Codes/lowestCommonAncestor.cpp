pair<bool,bool>  isDes(TreeNode* root,TreeNode*  v1,TreeNode*  v2)
{
	if(root == NULL) return {false,false};
	pair<bool, bool> l,r, res;
	res = {root->val == v1->val, root->val==v2->val};
	l = isDes(root->left, v1, v2);
	if(l.first and l.second) return l;
	r = isDes(root->right, v1, v2);
	if(r.first and r.second) return r;
	res = {res.first | l.first | r.first, res.second | l.second | r.second};
	return res;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
 	stack<TreeNode*> stk;
	TreeNode* lca = root;
	if(root->left) stk.push(root->left);
	if(root->right) stk.push(root->right);
	bool flag = true;
while(flag and !stk.empty())
{
	TreeNode* node = stk.top();
	stk.pop();
	pair<bool, bool> pb = isDes(node, p, q);
	if(pb.first and pb.second) { 
lca=node;
if(node->left)	stk.push(node->left); 
if(node->right) stk.push(node->right);
}
		else if(pb.first or pb.second) {
				flag = false;
}
		
}
return lca;
    }
