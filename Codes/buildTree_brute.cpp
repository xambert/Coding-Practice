void print(vector<int> &p)
{
    if(!p.size()) cout<<"EMpty MF\n";
    for(int &x: p) cout<<x<<" ";
    cout<<"\n";
}
TreeNode* build(vector<int> u, vector<int> v)
{
if(u.size()==0 or v.size()==0) return NULL;
int val = u[0];
int r= v.size(),i,index;
    /*
while(l<r)
{
mid = (l+r)/2;
if(v[mid]==val) { index=mid; break;}
else if(v[mid] > val) r = mid-1;
else l = mid+1;
}   */
for(i=0;i<r;i++) { if(v[i]==val) { index=i; break; }}
TreeNode *root = new TreeNode(val);
vector<int> leftin,leftpre,rightin, rightpre;
for(i=0;i<index;i++) leftin.push_back(v[i]);
for(i=index+1;i<v.size();i++) rightin.push_back(v[i]);
for(i=1;i<=index;i++) leftpre.push_back(u[i]);
for(i=index+1;i<u.size();i++) rightpre.push_back(u[i]);
    /*
    cout<<"leftin\n";
    print(leftin);
    cout<<"rightin\n";
    print(rightin);
    cout<<"leftpre\n";
    print(leftpre);
    cout<<"rightpre\n";
    print(rightpre);
    cout<<"------------\n";
    */
root->left = build(leftpre, leftin);
root->right = build(rightpre, rightin);

return root;
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder);
        
    }
