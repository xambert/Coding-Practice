ListNode *helper(ListNode *head, ListNode *prev)
    {
        /*
        
         1,2,3
         
         [1]
         null, 1
         n=null
         null<-1
         prev = 1
         
         
         
        */
        if(head==NULL)
        {
            return prev;
        }
        ListNode* next;
        next = head->next;
        head->next = prev;
        return helper(next, head);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        return helper(head, prev);
    }
