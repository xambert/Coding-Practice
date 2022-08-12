void reorderList(ListNode* head) {
        /*
        1. finding mid;
        1,2
        head= 1-2
        1-2-None
        
        1,2,3
        1,2
        
        fh 1,2
        sh 3
        */
        
        if(head==nullptr) return ;
        
        ListNode *slow, *fast, *curr, *start, *temp, *prev, *p1, *p2;
        
        slow = head;
        fast = head->next;
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        curr = slow->next;
        slow->next = nullptr;
        prev = nullptr;
        temp = nullptr;
        while(curr!=nullptr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        start = head;
        while(prev!=nullptr)
        {
            p1 = start->next;
            p2 = prev->next;
            start->next = prev;
            prev->next = p1;
            start = p1;
            prev = p2;
        }
    }
