#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void main(void)
{
    int testArray[] = {1,2,3,4};

    node* head;
    node* n = makeNode(6);

    head = createList(head, 4, &testArray[0]);

    prettyPrint(n);
    // head = deleteNode(head, 3);
    // head = append(head, 1);
    // n = getNode(head, 0);
    // printf("n %d %d\n", n, n->value);
    prettyPrint(head);
    
}