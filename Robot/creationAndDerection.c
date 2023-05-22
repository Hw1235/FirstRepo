#include <stdio.h>
struct Robot {
  int x, y;
  char der;
  char command[5];
};
int main() {
  struct Robot robot;
  printf("\nEnter Value of X: ");
  scanf("%d",&robot.x);

  printf("\nEnter Value of Y: ");
  scanf("%d",&robot.y);

  printf("\nEnter Direction: ");
  scanf(" %c", &robot.der);

  printf("\nEnter Command: ");
  scanf("%s",robot.command);

  // direction
  if (robot.der == 'E' && robot.command[0] == 'R') {
    robot.der = 'S';
  } else if (robot.der == 'E' && robot.command[0] == 'L') {
    robot.der = 'N';
  } else if (robot.der == 'S' && robot.command[0] == 'R') {
    robot.der = 'W';
  } else if (robot.der == 'S' && robot.command[0] == 'L') {
    robot.der = 'E';
  } else if (robot.der == 'N' && robot.command[0] == 'R') {
    robot.der = 'E';
  } else if (robot.der == 'N' && robot.command[0] == 'L') {
    robot.der = 'W';
  } else if (robot.der == 'W' && robot.command[0] == 'R') {
    robot.der = 'N';
  } else if (robot.der == 'W' && robot.command[0] == 'L') {
    robot.der = 'S';
  }

    printf("\nNew face of direction: %c\n", robot.der);
  return 0;
}
