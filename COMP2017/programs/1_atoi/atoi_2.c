#include <stdio.h>
//1. write atoi
//2. accept number from command line
//3. add two numbers from command line

int atoi(char* str) {
  int num = 0;
  int i = 0;
  while (str[i] != '\0') {
    num = (num * 10) + str[i] - '0';
    i++;
  }
  return num;
}

int main(int argc, char* argv[]) {

  if (argc != 2) {
    printf("usage: ./atoi <num>");
    return 1;
  }

  int number = atoi(argv[1]);
  printf("%d\n", number);

  return 0;
}
