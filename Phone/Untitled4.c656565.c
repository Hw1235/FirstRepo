#include<stdio.h>

// constants for directions
#define DIRECTION_NORTH 0
#define DIRECTION_EAST 1
#define DIRECTION_SOUTH 2
#define DIRECTION_WEST 3
#define DIRECTION_MAX 4
#define DIRECTION_DEFAULT DIRECTION_NORTH

// structure for robot position
typedef struct {
    int x;
    int y;
} robot_position_t;

// structure for robot status
typedef struct {
    int direction;
    robot_position_t position;
} robot_status_t;

// function to create a new robot
#include<stdio.h>

// constants for directions
#define DIRECTION_NORTH 0
#define DIRECTION_EAST 1
#define DIRECTION_SOUTH 2
#define DIRECTION_WEST 3
#define DIRECTION_MAX 4
#define DIRECTION_DEFAULT DIRECTION_NORTH

// structure for robot position
typedef struct {
    int x;
    int y;
} robot_position_t;

// structure for robot status
typedef struct {
    int direction;
    robot_position_t position;
} robot_status_t;

// function to create a new robot
robot_status_t robot_create(int direction, int x, int y)
{
    direction = (direction >= DIRECTION_MAX) ? DIRECTION_DEFAULT : direction;
    return (robot_status_t) {
        .direction = direction,
        .position = {
            .x = x,
            .y = y
        }
    };
}

// function to turn the robot to the right
static void robot_turn_right(robot_status_t * robot)
{
    robot->direction = (robot->direction + 1) % (DIRECTION_MAX - DIRECTION_NORTH);
}

// function to turn the robot to the left
static void robot_turn_left(robot_status_t * robot)
{
    robot->direction = (robot->direction - 1 < DIRECTION_MAX) ?
        robot->direction - 1 : DIRECTION_WEST;
}

// function to move the robot forward
static void robot_advance(robot_status_t * robot)
{
    switch (robot->direction) {
        case DIRECTION_NORTH:
            robot->position.y++;
            break;
        case DIRECTION_EAST:
            robot->position.x++;
            break;
        case DIRECTION_SOUTH:
            robot->position.y--;
            break;
        case DIRECTION_WEST:
            robot->position.x--;
        default:
            return;
    }
}

// function to move the robot according to a sequence of commands
void robot_move(robot_status_t * robot, const char *commands)
{
    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
            case 'L':
                robot_turn_left(robot);
                break;
            case 'R':
                robot_turn_right(robot);
                break;
            case 'A':
                robot_advance(robot);
        }
    }
}

int main() {
    // create a new robot at position (0, 0) facing north
    robot_status_t robot = robot_create(DIRECTION_NORTH, 0, 0);

    // move the robot according to the commands "RAALAL"
    robot_move(&robot, "RAALAL");

    // print the final position of the robot
    printf("(%d,%d)\n", robot.position.x, robot.position.y);

    return 0;
}
{
    direction = (direction >= DIRECTION_MAX) ? DIRECTION_DEFAULT : direction;
    return (robot_status_t) {
        .direction = direction,
        .position = {
            .x = x,
            .y = y
        }
    };
}

// function to turn the robot to the right
static void robot_turn_right(robot_status_t * robot)
{
    robot->direction = (robot->direction + 1) % (DIRECTION_MAX - DIRECTION_NORTH);
}

// function to turn the robot to the left
static void robot_turn_left(robot_status_t * robot)
{
    robot->direction = (robot->direction - 1 < DIRECTION_MAX) ?
        robot->direction - 1 : DIRECTION_WEST;
}

// function to move the robot forward
static void robot_advance(robot_status_t * robot)
{
    switch (robot->direction) {
        case DIRECTION_NORTH:
            robot->position.y++;
            break;
        case DIRECTION_EAST:
            robot->position.x++;
            break;
        case DIRECTION_SOUTH:
            robot->position.y--;
            break;
        case DIRECTION_WEST:
            robot->position.x--;
        default:
            return;
    }
}

// function to move the robot according to a sequence of commands
void robot_move(robot_status_t * robot, const char *commands)
{
    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
            case 'L':
                robot_turn_left(robot);
                break;
            case 'R':
                robot_turn_right(robot);
                break;
            case 'A':
                robot_advance(robot);
        }
    }
}

int main() {
    // create a new robot at position (0, 0) facing north
    robot_status_t robot = robot_create(DIRECTION_NORTH, 0, 0);

    // move the robot according to the commands "RAALAL"
    robot_move(&robot, "RAALAL");

    // print the final position of the robot
    printf("(%d,%d)\n", robot.position.x, robot.position.y);

    return 0;
}
