#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void prettyPrint(node* head)
{
    node* curr = head;

    while(curr != NULL){
        printf("%d --> ", curr->value);
        curr = curr->next;
    }
    printf("NULL\n");
}

node* append(node* head, int value)
{
    node* curr = head;
    node* newNode = makeNode(value);
    
    if(head == NULL){
        // Adding to empty list
        head = newNode;
    }
    else{

        while(curr->next != NULL){
            curr = curr->next;
        }
        
        curr->next = newNode;
    }

    return head;
}

node* insertNode(node* head, int index, int value)
{
    node *newNode = makeNode(value);
    node* prev = makeNode(0);
    
    if(index == 0){
        newNode->next = head;
        head = newNode;
    }
    else{
        prev = getNode(head, index - 1);

        newNode->next = prev->next;
        prev->next = newNode;
    }
    return head;
}

node* deleteNode(node* head, int index)
{
    node* removed = makeNode(0);
    node* prev = makeNode(0);
    removed = getNode(head, index);
    
    if(index == 0){
        head = getNode(head, 1);
        removed->next = NULL;
    }
    else if(index == listLength(head) - 1){
        prev = getNode(head, index - 1);
        prev->next = NULL;
    }
    else{
        node* next = makeNode(0);
        next = getNode(head, index + 1);
        prev = getNode(head, index - 1);
        prev->next = next;
        removed->next = NULL;
    }
    
    free(removed);
    return head;
}

node* createList(node* head, int length, int valArray[])
{
    int i;
    node* nextNode;
    
    for(i = 0; i < length; i++){
        head = append(head, valArray[i]);
    }

    return head;
}

node* makeNode(int value)
{
    node* newNode = (node* ) malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;

    return newNode;
}

node* getNode(node* head, int index)
{
    int i;

    node* curr = head;

    if((head == NULL) || (index > listLength(head) - 1) || (index < 0)){
        return curr;
    }
    else{
        for(i = 0; i < index; i++){
            curr = curr->next;
        }

        return curr;
    }
}

int listLength(node* head)
{
    int length = 0;
    node* curr = head;

    while(curr != NULL){
        curr = curr->next;
        length++;
    }

    return length;
}