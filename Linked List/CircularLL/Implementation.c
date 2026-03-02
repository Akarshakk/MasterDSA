#include <stdio.h>
#include <stdlib.h>

///Circular Linked List Node Structure
struct Node {
    int data;
    struct Node* next;
};

/// Function to create a new Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}   

int main()
{
    struct Node* head = createNode(10);
    head->next = head; // Pointing to itself to make it circular

    printf("Data in the circular linked list: %d\n", head->data);
    printf("Next node data (should be same as head): %d\n", head->next->data);

    // Free the allocated memory
    free(head);
    
    return 0;
}