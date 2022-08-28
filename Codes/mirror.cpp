void mirror(Node* root) {
        // code here
        if(root==NULL) return;
        Node *temp  =root->left;
        root->left =root->right;
        root->right = temp;
        mirror(root->left);
        mirror(root->right);
    }
