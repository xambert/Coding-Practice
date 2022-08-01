int maxdepth(TreeNode* root)
{
if(root==NULL) return 0;
int l = maxdepth(root->left);
if(l==-1) return l;
int r = maxdepth(root->right);
if(r==-1) return -1;
if(abs(l-r)>1) return -1;
return max(l,r)+1;
}
bool isBalanced(TreeNode* root) {
        int res = maxdepth(root);
	    return res!=-1;
    }
