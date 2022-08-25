vector<int> leftView(Node *root)
{
   // Your code here
   if(!root) return {};
   queue<Node*> q;
   q.push(root);
   vector<int> result;
   while(!q.empty())
   {
       int sz = q.size();
       for(int i=0;i<sz;i++)
       {
           Node* f = q.front();
           q.pop();
           if(!i) result.push_back(f->data);
           if(f->left) q.push(f->left);
           if(f->right) q.push(f->right);
       }
   }
   return result;
}
