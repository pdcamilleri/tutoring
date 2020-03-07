#include <stdio.h>

// #defines

int main(int argc, char* argv[]) {
  if (argc != 4) {
    printf("usage: ./bouncy <num> <start> <iterations>");
    return 1;
  }
 
  // process each commandline argument
  char* str = ???;
  int start = ???;
  int iteration = ???;

  // step-by-step approach
  // Part 1. print out the string character by character
  // Part 2. print out the string starting from the "start" position
  while ( ??? ) {
    // print individual characters


    // Part 3. (complete and test Parts 1 & 2 other parts first)
    // 3a) check the direction, and increment/decrement your index variable
    //if ( ??? ) {
    // ???
    //} else {
    // ???
    //}
    // 3b) reverse direction if we have hit the start/end of the string 
    //if ( end of string ) {
    // ???
    //} else if ( start of string ) {
    // ???
    //}
  }
  printf("\n");

  return 0;
}
