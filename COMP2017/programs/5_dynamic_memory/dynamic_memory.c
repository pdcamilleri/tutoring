#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    int length = 5;
    // TODO why do we need to cast?
    // void* is a pointer to *any* type
    // pointer 4 bytes
    // int 4 bytes
    // void* 4 bytes
    // char* 4 bytes
    int* array = (int*) malloc(sizeof(int) * length);
    // always null check when using malloc/calloc/realloc
    if (NULL == array) {
        perror("Malloc Failed!"); return 1;
    }
    for (int i = 0; i < length; i++) {
        printf("%d: %d\n", i, array[i]);
    }
    printf("\n");
    // array zeroed
    printf("\n");
    free(temp);
    // any usage of array is invalid after it has been freed
    int* temp = array;
    array = realloc(sizeof(int), length);
    if (NULL == array) {
        perror("Calloc Failed!"); return 1;
    }
    for (int i = 0; i < length; i++) {
        printf("%d: %d\n", i, array[i]);
    }
    printf("\n");

    free(array);
    // way to tell the program
    // that you no longer need this memory
    // and it is "free" to be reallocated
    // again.

    return 0;
}


/*
Good site that explains basic structure of memory
https://craftofcoding.wordpress.com/2015/12/07/memory-in-c-the-stack-the-heap-and-static/

Stack v                      | 0x7000
-----------------------------|
 length = 5                  | 0x7004
-----------------------------|
 array = 0x8008              | 0x7008
-----------------------------|
                             |
-----------------------------|
                             |
-----------------------------|
array[1]                      |
-----------------------------|
array[0]  (calloc)                      |0x8008
-----------------------------|
array[1]                            |0x8004
-----------------------------|
array[0]  (malloc)                    | 0x8000
-----------------------------|
Heap  ^                      |
------------------------------
static memory
static variables
global variables
var_c = 5

*/


