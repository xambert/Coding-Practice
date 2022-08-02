vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        int i,qs;
        TreeNode* el;
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            qs = q.size();
            for(i=0;i<qs;i++)
            {
                el = q.front();
                q.pop();
                v.push_back(el->val);
                if(el->left) q.push(el->left);
                if(el->right) q.push(el->right);
            }
            res.push_back(v);
        }
        return res;
    }
