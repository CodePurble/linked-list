## **Disclaimer** 
A Linux development environment is required

## About
This is a linked list implementation in the C language. These lists can be used to store values of type `int` only.

## Setting it up
1. Clone this repo by downloading and extracting the zip file or through a terminal like so-
    ```bash
    git clone https://github.com/CodePurble/linked-list.git
    ```
2. Open up a terminal and run
    ```bash
    cd linked-list
    ./setup.sh path_to_your_include_dir path_to_your_source_dir
    ```
    * If you run into an error like this- 
        ```bash
        bash: ./setup.sh: Permission denied
        ```
      Do this
        ```bash
        chmod +x setup.sh
        ```
      and then try again
3. Be sure to include `linkedList.h` in all program files where you want to use this library

## How does it work??
Here, each element of the list is called a _node_. A node is defined by the following structure-

```C
struct NODE{
    int value; // Integer value
    struct NODE* next; // Pointer to the next node
};

typedef struct NODE node;
```

## Available functions
* #### `void prettyPrint(node* head)`
    * Displays linked list as a linked list! (Try it!)
* #### `int listLength(node* head)`
    * Returns length of list (Duh)
* #### `node* append(node* head, int value)`
    * Adds a node to the list represented by `head` containing the value `value`
    * Returns a pointer to `head`
* #### `node* createList(node* head, int length, int valArray[])`
    * Creates a linked list containing the values given through `valArray[]` having it's head as `head`
    * Returns a pointer to `head`
* #### `node* makeNode(int value)`
    * Creates a new node containing `value`
    * Returns a pointer to the created node
* #### `node* getNode(node* head, int index)`
    * Returns the node at `index` from the list represented by `head`
* #### `node* insertNode(node* head, int index, int value)`
    * Inserts a node holding `value` at `index` in the list represented by `head`
    * Returns a pointer to `head`
* #### `node* deleteNode(node* head, int index)`
    * Removes node at `index` in the list represented by `head`
    * Returns a pointer to `head`

## How do I use this library??
* Declare and initialise nodes as follows-
```C
node* node1 = makeNode(5); // Makes a node holding value 5
```
* All nodes use `malloc()` calls when being initialised (using the `makeNode()` function), so it is advised not to explicitcly use `malloc()` for nodes wherever possible.

# Have fun! :)
