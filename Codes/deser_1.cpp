/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        /*
            1
        2 || 3
        || 4 5
        1-
        2- 3-
        # # 4-5-
        */
        if(root==nullptr) return "#";
        string s = to_string(root->val);
        queue<TreeNode*> q;
        q.push(root);
        int i,sz;
        while(!q.empty())
        {
            sz = q.size();
            for(i=0;i<sz;i++)
            {
                TreeNode *u = q.front();
                q.pop();
                if(u->left) { s +=" " + to_string(u->left->val); q.push(u->left);}       
                else s = s +  " " + "#";
                if(u->right) { s +=" " + to_string(u->right->val);q.push(u->right); }
                else s = s +  " " + "#";
            }
        }
        return s;
    }
    /*
    TreeNode* assign(vector<string> &q,int index, int  n)
    {
        if(q[index]=="#") return nullptr;
        string s = q[index];
        TreeNode* root = new TreeNode(stoi(s));
        root->left = assign(q,index+1,n);
        root->right = assign(q,index+2,n);
        return root;
    }
    */
    TreeNode* create(string s)
    {
        if(s=="#") return NULL;
        return new TreeNode(stoi(s));
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        //auto des = split(data);
        istringstream s(data);
        string val;
        s>>val;
        if(val=="#") return nullptr;
        queue<TreeNode*> q;
        int i=0;
        TreeNode* root = create(val);
        q.push(root);
        while(!q.empty())
        {
            TreeNode* u = q.front();
            q.pop();
            s>>val;
            u->left = create(val);
            s>>val;
            u->right = create(val);
            if(u->left) q.push(u->left);
            if(u->right) q.push(u->right);
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
