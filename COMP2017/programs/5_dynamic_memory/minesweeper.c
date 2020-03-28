// main.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    int length = 3;
    int* array = (int*) malloc(sizeof(int) * length);
    int* array = (int*) malloc(sizeof(int) * length * length);
    for (int i =0; i < length; i++) {

    }
    array[i][j] => (array length * i) + j
    array[2][2] => (3 * 2) + 2 = 8
    1 | 2| 3
    4| 5 | 6
    7| 8 | 9
    array[i][j][k] => (array length * array length * i)
                     + (array length * j)
                     + k


// An example of how init_game might setup a game that looks like this
//    0 | 0 | 0
//    0 | 1 | 1
//    0 | 1 | *

    int* dim_sizes = {3, 3};
    int* mined_cells = { {2,2} }
    int dim = 2;
    struct cell* game = malloc(sizeof(struct cell) * dim_sizes[0] * dim_sizes[1]);
    init_game(game, dim, dim_sizes, 1, mined_cells);
    return 0;
}


 struct cell                          |
-----------------------------|
 struct cell                            |
-----------------------------|
struct cell |
----------------------------|
struct cell                            |
-----------------------------|
struct cell                         |
-----------------------------|
 struct cell                         |
-----------------------------|
  struct cell  [2]                        |
-----------------------------|
  struct cell  [1]                         |
-----------------------------|
 struct cell  [0]                          |
-----------------------------|
                             |
-----------------------------|
