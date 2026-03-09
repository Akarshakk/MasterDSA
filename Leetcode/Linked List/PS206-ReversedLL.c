struct ListNode {
    int val;
    struct ListNode *next;
};

void swap(struct ListNode *a, struct ListNode *b){

    int temp=a->val;
    a->val=b->val;
    b->val=temp;
}
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *ptr1,*ptr2;

    if(head=='NULL'){
        return head;
    }
    ptr1=head;
    while(ptr1->next!='NULL'){

        ptr2=ptr1->next;

        while(ptr2!='NULL'){

            swap(ptr1,ptr2);
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    return head;
}