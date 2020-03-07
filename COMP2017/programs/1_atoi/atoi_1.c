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
  printf("%d\n", atoi("123"));
  return 0;
}
