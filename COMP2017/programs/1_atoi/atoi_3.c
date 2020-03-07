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

  if (argc != 3) {
    printf("usage: ./atoi <num> <num>");
    return 1;
  }

  int first = atoi(argv[1]);
  int second = atoi(argv[2]);
  printf("%d + %d = %d\n", first, second, first + second);

  return 0;
}
