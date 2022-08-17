void print(ListNode *head)
    {
        while(head) { cout<<head->val<<" "; head = head->next; }
        cout<<endl;
    }
    ListNode* merge2Lists(ListNode *left, ListNode*right)
    {
        ListNode head(INT_MIN);
        ListNode *res = &head;
        if(left==nullptr) return right;
        if(right==nullptr) return left;
        while(left and right)
        {
            if(left->val <= right->val)
            {
                res->next = left;
                left = left->next;
            }
            else
            {
                res->next = right;
                right = right->next;
            }
            res = res->next;
        }
        if(left) res->next = left;
        if(right) res->next = right;
        return head.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        int r = lists.size(),i=0;
        while(i<r and (lists[i] == nullptr))
        {
            i++;
        }
        if(i==r) return nullptr;
        else if(r-i == 1) return lists[i];
        else {
        ListNode *result, *temp;
        while(i<r)
        {
            temp = merge2Lists(result, lists[i]);
            result = temp;
            i++;
        }
        return result;
        }
    }
