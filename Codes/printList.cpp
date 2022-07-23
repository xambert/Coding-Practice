struct Node *insert(struct Node *head, int data) {
    // Code here
    Node *temp = new Node(data);
    temp->npx = head;
    head = temp;
}

vector<int> printList(struct Node *head) {
    // Code here
    vector<int> v;
    while(head)
    {
      v.push_back(head->data);
      head = head->npx;
    }
    return v;
}
