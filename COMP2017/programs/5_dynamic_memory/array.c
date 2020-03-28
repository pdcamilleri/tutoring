// main.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {

    char* buffer = malloc(100 * sizeof(char));

    // Allocate memory for 10 integers
    int* values = malloc(10 * sizeof(int));

    // Allocate memory for 10 integers, setting all elements to zero
    int* zeroes = calloc(sizeof(int), 10);

    // Returns a pointer to a new block of memory that contains space // for 200 characters. The values of the elements are preserved. buffer = realloc(buffer, 200 * sizeof(char));

    "hello", "world", "one"
    - dynamic memory array
    "helloworldonetwo threehelloworld  "
    - realloc-ed array
    "helloworldonetwo threehelloworldpeter                      "
    // Q4
    // create empty array to store strings
    char* dynamic_array = malloc(100 * sizeof(int));
    while (fgets(str) != NULL) {
        // check if dynamic array has strlen(str) space for new word
        // if not enough space
        //    realloc
        //    copy old array to new array
        while (newInputString[i] != '\0') {
            dynamic_array[someIndexInMiddle] = newInputString[i];
            i++;
        }
        //    free old array
        //
        // put string into dynamic array
    }
    //Q5
    struct dyn_array* = dyn_array_init();
    while (fgets(str) != NULL) {
        // check if dynamic array has strlen(str) space for new word
        // if not enough space
        //    realloc
        dyn_array_add(dyn_array, 6);
        //    copy old array to new array
        //    free old array
        //
        // put string into dynamic array
    }


