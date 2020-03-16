// A set of examples that shows the benefits of using an IDE to write code
// and debug programs

#include <stdio.h>
#include <string.h>

void count(int array[20]);

int atoi(char* str);

int main(int argc, char* argv[]) {
    // identifies errors on the fly

//    int b = 1 + 2;
//    int a = b + 5;
//    int thisIsUsed = 44;
//    int neverUsed = 44 + thisIsUsed;

// Also identifies "issues" that may or may not be problems
// (this is when a bit of code turns a light yellow)
//    if (a = 7 || b == 3) {
//        printf("\n the condition is true \n");
//    }


    // can autoformat too
    // Cmd + alt + L

    // This program CLion takes care of simple stuff so you can focus on harder stuff.


// Using the debugger

//    Can see the string in debugger
    char str[] = "asdasd";
//    update a single character
    str[3] = '!';
    // Add a "breakpoint" by clicking on the area on the left, next to he line number
    // it should create a red dot. click again to remove it.
    // run the program using the green "bug" symbol to stop at breakpoints.

//    notice character changes, entry changes in blue too.



// can view entire arrays
    int array[20] = {1, 3, 4, 6, 77, 8345};
// notice how all remaining entries are set to 0.
//   can even modify values if you need too.


// in method
// put a breakpoint here
// use the "step into" action to go into the method while debugging.
    count(array);
// use "step over" to run the line of code and go to the next line.



// in method
    atoi("asd");


// can set commandline arguments too. click on the dropdown on the top righ
// and then click "edit configurations"
// enter things into the "program arguments" 

    printf("command line");




    return 0;
}


void count(int* array) {
    // arrays in methods are a little trickier, because we dont have the full array information.
    // instead we can use "*(int(*)[20])array"
    // OR
    // in the LLDB tab
    // "v" to show variables
    // and "p" to print them
    // "p *(int(*)[20])array" in the LLDB tab
    // this also works in debugger, e.g. "*(int(*)[20])array" will display the array
    for (int i = 0; i < 20; ++i) {
        printf("%d\n", array[i]);
    }
    return;
}

int atoi(char *str) {
    // Strings are the same
    // might be easier to go into LLDB and "v" and "p" the string
    // if you want to view each character as an array, then
    // you need
    // (char(*)[50])str
    // or "p (char(*)[50])str" in LLDB
    // this converts the variable into an array of length 50, so it can be displayed
    // do note that if this goes off the end, some other data will show.
    // shouldnt crash anything, but just be aware of what you are reading.
    int a = 0;
    for (int i = 0; i < 10; i++) {
        a += i;
    }
    return a;
}

