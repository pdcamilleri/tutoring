#include <stdio.h>
#include <stdlib.h>

#define FORWARD 1
#define BACKWARD 0

int main(int argc, char* argv[]) {

  if (argc != 4) {
    printf("usage: ./bouncy <string> <start> <iterations>");
    return 1;
  }
 
  char* str = argv[1];
  int start = atoi(argv[2]);
  int iteration = atoi(argv[3]);
  // printf("%s , %d , %d\n", str, start, iteration);

  int flag = FORWARD;
  int i = start;
  int counter = 0;
  while (counter <= iteration) {
    //printf("i is %d, counter == %d\n", i, counter);
    printf("%c", str[i]);
    counter++;
    if (flag == FORWARD) {
      i++;
    } else if (flag == BACKWARD) {
      i--;
    }
    if (str[i] == '\0') {
      flag = BACKWARD;
      i -= 2;
    } else if (i == 0) {
      flag = FORWARD;
    }
  }
  printf("\n");

  return 0;
}
