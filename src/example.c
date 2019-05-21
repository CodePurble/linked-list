#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void main(void)
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};

    node* head1 = NULL; // Declare a node (Note that this is how it must be done)
    node* n = NULL;
    node* head2 = NULL;

    printf("\nList creation\n");
    head1 = createList(head1, 4, arr1); // Create a linked list containing the values in testArray[]
    prettyPrint(head1);
    printf("\n");

    printf("Node deletion from list\n");
    head1 = deleteNode(head1, 3); // Removes node at index 3 from list represented by head1
    prettyPrint(head1);
    printf("\n");

    printf("Appending a node to a list\n");
    head1 = append(head1, 10); // Appends a node containing the value 1 to the list represented by head1
    prettyPrint(head1);
    printf("\n");

    printf("Node insertion into list\n");
    head1 = insertNode(head1, 2, 9); // Inserts a node at index 2 containing the value 1 to the list represented by head1
    prettyPrint(head1);
    printf("\n");
    
    printf("Getting a node from a list\n");
    n = getNode(head1, 0); // Gets node at index 0 of list represented by head1
    printf("n points to %x, and holds %d\n\n", n, n->value);

    printf("Here's another list\n");
    head2 = createList(head2, 4, arr2); // Creating another list
    prettyPrint(head2);
    printf("\n");

    printf("Appending a list to a list\n");
    head1 = appendList(head1, head2); // Appending two lists
    prettyPrint(head1);
    printf("\n\n");
}