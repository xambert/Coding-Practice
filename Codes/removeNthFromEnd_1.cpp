ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        /*
        1,2,3,4,5
        1,3
        2,3,4
        3,4,5
        */
        //if(head->next == nullptr) return nullptr;
        ListNode *slow, *fast;
        slow = head;
        fast = head;
        for(int i=0;i<n;i++)
        {
            fast = fast->next;
        }
        if(fast==nullptr)   //n = length of ll
        {
            ListNode *temp = head->next;
            head->next = nullptr;
            head = temp;
            return head;
        }
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        if(slow->next)
        slow->next = slow->next->next;
        return head;
    }
