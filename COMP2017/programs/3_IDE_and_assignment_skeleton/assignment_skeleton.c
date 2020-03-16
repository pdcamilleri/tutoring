// A very brief skeleton of how a robot/battleship game may be structured
// by being broken down into smaller functions.

#include <stdio.h>

int main() {

    // 1. get inputs from user
    printf("Enter srand: ");
    scanf("%d", ...);

    // initialise the game with empty array
    char[8][8] board = { ... };
    // put human and robots onto the array
    board = setupGame(board, human position, robot positions, numberOfRobots);

    while/for ( did the user enter "exit" ) {
        if (user entered "display") {
            display(board);
        } else if (user exit) {
            return;
        } else {
            playUserAction(board, userMove)
        }
    }

    return 0;
}


void playUserAction(board, userAction) {

    if (NT) {
        array[i][j] = ' ';
        array[i][j + 1] = 'H';
    } else if (ST){

    }
    // etc

}

// If you break down the program into functions in a certain way
// you should be able to write a different main function
// similar to the one below this that "plays" the entire game without any interaction required
// so you dont need to enter the commands like "NT".
// This is how automated testing of software works.

// int main() {
//    board = setupGame(human position, robot positions, numberOfRobots)
//
//    // getting action from the user
//    playUserAction(board, "display");
//    playUserAction(board, "NT");
//    playUserAction(board, "WT");
//    playUserAction(board, "WT");
//    playUserAction(board, "exit");
//    return 0
// }

