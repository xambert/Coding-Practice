https://practice.geeksforgeeks.org/problems/k-distance-from-root/1?page=1&difficulty[]=0&status[]=unsolved&company[]=Samsung&sortBy=accuracy

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  queue<Node*> q;
  q.push(root);
  Node *f;
  vector<int> res;
  int sz = 0;
  while(!q.empty())
  {
      sz = q.size();
      for(int i=0;i<sz;i++)
      {
          f = q.front();
          q.pop();
          if(!k)
          res.push_back(f->data);
          if(f->left) q.push(f->left);
          if(f->right) q.push(f->right);
      }
      if(!k) return res;
      k--;
  }
  return {};
}
