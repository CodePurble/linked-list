#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void main(void)
{
    int testArray[] = {1,2,3,4};

    node* head; // Declare a node
    node* n = makeNode(0); // Dummy node to be used later (Note that this is how it must be done)

    printf("List creation\n");
    head = createList(head, 4, &testArray[0]); // Create a linked list containing the values in testArray[]
    prettyPrint(head);
    printf("\n");

    printf("Node deletion from list\n");
    head = deleteNode(head, 3); // Removes node at index 3 from list represented by head
    prettyPrint(head);
    printf("\n");

    printf("Appending to list\n");
    head = append(head, 1); // Appends a node containing the value 1 to the list represented by head
    prettyPrint(head);
    printf("\n");

    printf("Node insertion into list\n");
    head = insertNode(head, 2, 8); // Inserts a node at index 2 containing the value 1 to the list represented by head
    prettyPrint(head);
    printf("\n");
    
    printf("Getting a node from a list\n");
    n = getNode(head, 0); // Gets node at index 0 of list represented by head
    printf("n points to %d, and holds %d\n", n, n->value);
    
}