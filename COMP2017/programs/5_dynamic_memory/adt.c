// main.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    // list functions can be used here in main.c, even though the code is not here
    // this is similar to the concept behind how we can call printf
    // even though the code for printf isnt in this file.
    list_add();
    return 0;
}

// some prototype definition
// "list.h"
void list_add(struct node* head, int value);


// list.c
#include "list.h"
void list_add(struct node* head, int value) {
   return;
}

