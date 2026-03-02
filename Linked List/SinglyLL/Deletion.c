#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//Deleting a node from the beginning of the list

struct Node *delete_beg(struct Node *head) {

    struct Node *ptr;

    if(head == NULL) {
        printf("List is empty.\n");
        return head;
    }

    ptr = head; 
    head = head->next; 
    free(ptr); 

    return head; 
}

//Deleting a node from the end of the list

struct Node *delete_end(struct Node *head) {

    struct Node *ptr, *prev;

    if(head == NULL) {
        printf("List is empty.\n");
        return head;
    }

    ptr = head;

    while(ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }

    if(ptr == head) { // Only one node in the list
        head = NULL;
    } else {
        prev->next = NULL; 
    }
    
    free(ptr); 

    return head; 
}

//Deleting a node after a given node in the list

struct Node *delete_after_specific(struct Node *head){

    struct Node *ptr, *preptr;
    int val;

    printf("Enter the value after which you want to delete: ");
    scanf("%d", &val);
    ptr=head;
    preptr=ptr;

    while(preptr->data!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    
    return head;
}


