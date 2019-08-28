#ifndef linkedList_h
#define linkedLish_h

struct NODE{
    int value;
    struct NODE* next;
};

typedef struct NODE node;

void prettyPrint(node* head);

int listLength(node* head);

node* append(node* head, int value);
node* createList(node* head, int length, int valArray[]);
node* makeNode(int value);
node* getNode(node* head, int index);
node* insertNode(node* head, int index, int value);
node* deleteNode(node* head, int index);
node* appendList(node* head, node* appendHead);

#endif
