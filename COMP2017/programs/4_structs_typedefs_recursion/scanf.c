#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// This program shows some behaviours of scanf with multiple arguments
// as well as an example of use of sscanf

int main() {

    char a[100];
    char b;
    int c;
    printf("Enter a string character number: ");
    int numberScanned = scanf("%s %c %d", a, &b, &c);
    printf("scanf successfully scanned in %d items\n", numberScanned);


    getchar(); // eats the newline from scanf above

    // removing the newline from a string after using fgets
    printf("Enter a string: ");
    fgets(a, 20 - 1, stdin);
    if (a[strlen(a) - 1] == '\n') {
        printf("before '%s'", a);
        a[strlen(a) - 1] = '\0';
        printf("after '%s'", a);
    }


    // exit ....
    // "fire num num"

    sscanf("hello A 5", "%s %c %d", a, &b, &c);
    printf("you entered - %s %c %d\n", a, b, c);

    return 0;
}



