#include <stdio.h>
#include <string.h>
// This file (which wont compile) just shows some example usages of structs
// and typedefs and unions.
//
// There are also some examples on functions that use recursion
// 
// Finally there are some notes on the Minesweeper assignment

void increment(int pInt[10][10]);
void show(int pInt[10][10]);
int fibonacci(int n);
int stringLength(char *str);

// java
//public class Person {
//    String name;
//    int age;
//};

// C equivalent
struct person {
    int age;
    char firstName[20]; // necessary
    char lastName[20]; // optional
    union extras;
};

union extras {
    char* grandchild; // for old people
    char* parent; // for babies
    char* sibling; // for teenagers
    char* owner; // for pets
};





union person2 {
    int age;
    char firstName[20]; // necessary
    char lastName[20]; // optional
};

struct person2 bobby;
bobby.age = 66;
strcpy(bobby.firstname, "bobby");
strcpy(bobby.lastname, "jones");


typedef struct person person;
//typedef   type1       type2;

// or in one line.
typedef struct pet {
    int age;
    char name[20];
} pet;

// in future we will use typedef like this, along with malloc
//typedef struct person *Person;

int main() {

    int number;
//    struct person peter;
    person peter;
    peter.age = 65;
    strcpy(peter.name, "peter");

    pet dog;
    dog.age = 12;
//    dog.name = malloc(sizeof(char) * 10);
    strcpy(dog.name, "barry");

    // padding 2d array to function
    int board[10][10] = { { 0 } };
    show(board);
    increment(board);
    show(board);

    // recursion
    printf("fib == %d\n", fibonacci(7));

    // calculate string length using recursion
    char* str = "test";
    printf("string length == %d", stringLength(str));

    //// battlesips

    // Carrier: A 1 H
    //

//    getInputs(..)
//    placeAllShips()
//    while getUserAction
//        if action == exit
//            quit
//        else if action == fire
//            doFire
//        else if ..


    return 0;
}

void placeAllShips(int board[10][10], char ships[10][10]) {
    for line in ships
        placeShips
}

void placeShip(int board[10][10], int row, int column, horOrVert) {
    int i;
    // some check for hor or vert
    //
    for (...) {
        board[row +][col] == 'S';
    }
}

int stringLength(char *str) {
    if (str[0] == '\0') {
        return 0;
    }
    return 1 + stringLength(&str[1]);
//    return 1 + stringLength(str + 1);
}


int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void show(int board[10][10]) {
    int i;
    int j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void increment(int board[10][10]) {
    int i;
    int j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            board[i][j] += 1;
        }
    }
}



/*

 1 2 3    0 0 0
 4 5 6    1 1 1
 7 * 9    1 * 1
 struct cell {
    name;
    adjacent cells;
    mineHere ?:
}

 struct cell one   = { name: 1, adjacentCells: [2, 4, 5] }
 struct cell two   = { name: 2, adjacentCells: [1, 3, 4, 5, 6] }
 struct cell five  = { name: 5, adjacentCells: [1, 2, 3, 4, 6, 7, 8, 9] }
 struct cell eight = { name: 8, mineHere: true, ...}
 struct cell nine  = { name: 9, mineHere: false, adjacentCells: [5, 6, 8])

 user clicks on cell 9
    display the number of adjacent mines
        numAdjacentMines = 0;
        for cell in adjacentCells:
           if cell.mine == true
              numAdjacentMines += 1

     if numAdjacentMines == 0
       for cell in adjacentCells
         display_cell(cell)
     else
        show numAdjacentMines

user clicks on cell 9
   board[i - 1][j] ==>> check for mine
   board[i][j - 1] ==>> check for mine
   board[i][j + 1] ==>> check for mine
   board[i + 1][j] ==>> check for mine
   board[i + 1][j + 1] ==>> check for mine
   board[i - 1][j - 1] ==>> check for mine
   board[i + 1][j - 1] ==>> check for mine    // // off the end of the array
   board[i - 1][j + 1] ==>> check for mine  // off the end of the array


 1 2 3    0 0 0
 4 5 6    1 1 1
 7 * 9    1 * 1

 user clicks on cell 2
 if numAdjacentMines == 0
   for cell in adjacentCells
     display_cell(cell)




 */
