#include <stdio.h>

typedef struct {
    int x;
    int y;
    char d;
    char c;
} Robot;

int main() {
    Robot robot = { .x = 0, .y = 0, .d = 'E'};

    char command;
    do {
        printf("Enter command (A to move, Q to quit): ");
        scanf(" %c", &command);

        if (command == 'A') {
            if (robot.d == 'E') {
                robot.x++;
            } else if (robot.d == 'W') {
                robot.x--;
            } else if (robot.d == 'N') {
                robot.y++;
            } else if (robot.d == 'S') {
                robot.y--;
            }
        } else if (command == 'Q') {
            break;
        } else {
            printf("Invalid command!\n");
        }
    } while (1);

    return 0;
}
