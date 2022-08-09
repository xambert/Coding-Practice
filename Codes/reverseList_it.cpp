ListNode* reverseList(ListNode* head) {
        ListNode *prevnode, *tempnode;
        prevnode = NULL;
        while(head != NULL)
        {
            tempnode = head->next;
            head->next = prevnode;
            prevnode = head;
            head = tempnode;
        }
        if(head==NULL) head = prevnode;
        return head;
    }
