#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// //Inserting new node at the beginning of the list

// struct Node *insert_beg(struct Node *head) {

//     struct Node *newNode;
//     int num;

//     printf("Enter data: ");
//     scanf("%d", &num);

//     newNode = (struct Node*)malloc(sizeof(struct Node));
    
//     newNode->data = num; 
//     newNode->next = head; 
//     head = newNode; 
    
//     return head; 
// }

//Inserting new node at the end of the list

struct Node *insert_end(struct Node *head) {

    struct Node *newNode, *ptr;
    int num;

    printf("\nEnter Data : ");
    scanf("%d", &num);

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data=num;
    newNode->next=NULL;

    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }

    ptr->next=newNode;  //via pointer we are linking the new node to the last node of the list
    return head;
}


//Inserting new node at the given position of the list
