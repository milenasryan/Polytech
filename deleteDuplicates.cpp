
ListNode* deleteDuplicates(ListNode* head) 
{
	if (!head) {
        return head;
    }
        
    ListNode* current = head;
    	
    while (current->next != nullptr) {
        int tmp = current->val;
        ListNode* ptmp = current->next;
        if (ptmp->val == tmp) {
            current->next = ptmp->next;
        }
        else {
            current = current->next;
        }    
    }
    return head;
}
