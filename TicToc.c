#include <stdio.h>
#include<stdlib.h>


int main() {

    char box[10] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i, j;
    int userInput;
    int currentPlayer = 1;

    printf("\n\n\tTic-tac-toe\n\n");

    for (i = 0; i < 3; i++) {
        printf("\t\t\t\t\t\t     |    |    \n");
        printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[3 * i + 1], box[3 * i + 2], box[3 * i + 3]);
        printf("\t\t\t\t\t\t_____|____|____\n");
    }

     printf("\t\t\t\t\t\t     |    |    \n");

    for (int move = 1; move <= 9; move++) {
        printf("Player %d, enter a number (1-9): ", currentPlayer);
        scanf("%d", &userInput);

        if (userInput >= 1 && userInput <= 9 && box[userInput] != 'X' && box[userInput] != 'O') {
            if (currentPlayer == 1)
                box[userInput] = 'X';
            else
                box[userInput] = 'O';


            currentPlayer = (currentPlayer == 1) ? 2 : 1;

            printf("\n\nUpdated Tic-tac-toe Board:\n\n");

            for (i = 0; i < 3; i++) {
                printf("\t\t\t\t\t\t     |    |    \n");
                printf("\t\t\t\t\t\t %c   | %c  |%c   \n", box[3 * i + 1], box[3 * i + 2], box[3 * i + 3]);
                printf("\t\t\t\t\t\t_____|____|____\n");
            }

            printf("\t\t\t\t\t\t     |    |    \n");
        }
        else {
            printf("Invalid move! Try again.\n");
            move--;
        }
    }

    return 0;
}
