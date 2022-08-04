int ans = -1e8+2;
int getPath(TreeNode* root)
{
    if(root==NULL) return 0;
    int left=0, right=0;
    left = max(left,getPath(root->left));
    right = max(right,getPath(root->right));
    ans = max({root->val , ans, root->val+left+ right, root->val + max(left,right)});
    //cout<<root->val<<" "<<ans<<" "<<max(left, right)<<"\n";
    return root->val + max(left, right);
    
}
int maxPathSum(TreeNode* root) {
        int res =  getPath(root);
        return ans;
    }
