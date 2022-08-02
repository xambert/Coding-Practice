 vector<int> rightSideView(TreeNode* root) {  
        vector<int> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        int i,qs;
        TreeNode* el;
        while(!q.empty())
        {
            qs = q.size();
            for(i=0;i<qs;i++)
            {
                el = q.front();
                q.pop();
                if(el->left) q.push(el->left);
                if(el->right) q.push(el->right);
            }
            res.push_back(el->val);
        }
        return res;
    }
