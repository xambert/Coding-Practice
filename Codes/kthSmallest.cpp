int cnt =0, ans=-1;
void inorder(TreeNode* root,int k)
{
	if(!root or ans!=-1 ) {return;}
	inorder(root->left, k);
    //cout<<cnt<<" "<<root->val<<"\n";
    if((++cnt) == k) { ans=root->val;}
	inorder(root->right, k);
}

int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
