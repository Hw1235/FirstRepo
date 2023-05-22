
        #include <stdio.h>
        struct Robot {
          int x, y;
          char der;
          char command[10];
        };
        int main() {
          struct Robot robot;
          printf("\nEnter Value of X: ");
          int _ = scanf("%d", &robot.x);

          printf("\nEnter Value of Y: ");
          scanf("%d", &robot.y);

          printf("\nEnter Direction: ");
          scanf(" %c", &robot.der);

          printf("\nEnter Command: ");
          scanf("%s", robot.command);

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

          // command
          //  if (robot.command[0] == 'A') {
          //    if (robot.der == 'E') {
          //      robot.x++;
          //    } else if (robot.der == 'N') {
          //      robot.y++;
          //    } else if (robot.der == 'W') {
          //      robot.x--;
          //    } else if (robot.der == 'S') {
          //      robot.y--;
          //    }
          //  }


          // command
          for (int i = 1; robot.command[i] != '\0'; i++) {
            if (robot.command[i] == 'A') {
              if (robot.der == 'E') {
                robot.x++;
              } else if (robot.der == 'N') {
                robot.y++;
              } else if (robot.der == 'W') {
                robot.x--;
              } else if (robot.der == 'S') {
                robot.y--;
              }
            } else if (robot.command[i] == 'R') {
              if (robot.der == 'E') {
                robot.der = 'S';
              } else if (robot.der == 'S') {
                robot.der = 'W';
              } else if (robot.der == 'W') {
                robot.der = 'N';
              } else if (robot.der == 'N') {
                robot.der = 'E';
              }
            } else if (robot.command[i] == 'L') {
              if (robot.der == 'E') {
                robot.der = 'N';
              } else if (robot.der == 'N') {
                robot.der = 'W';
              } else if (robot.der == 'W') {
                robot.der = 'S';
              } else if (robot.der == 'S') {
                robot.der = 'E';
              }
            }
          }

          printf("\nshould leave it at (%d,%d)", robot.x, robot.y);
          printf(" facing ");

          if (robot.der == 'E') {
            printf("east.\n");
          } else if (robot.der == 'N') {
            printf("north.\n");
          } else if (robot.der == 'S') {
            printf("south.\n");
          } else if (robot.der == 'W') {
            printf("west.\n");
          }
          return 0;
        }
