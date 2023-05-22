#include<stdio.h>
struct Robot{
int x,y;
char command[10];
char direction;
};
int main(){
struct Robot robot;
printf("Enter Value of X: ");
scanf("%d",&robot.x);

printf("Enter Value of Y: ");
scanf("%d",&robot.y);

printf("Enter Value of Command : ");
scanf("%s",robot.command);


printf("Enter Value of Direction: ");
scanf(" %c",&robot.direction);


//   printf("Your Entered Value of (X,Y) %d  %d \n",robot.x,robot.y);
//    //printf("\nDirection is %c ",robot.direction);
//    printf("\Your Entered Direction is %c\n", robot.direction);
//


//Direciotn
if(robot.direction=='E' && robot.command[0]=='R'){
        robot.direction='S';
    }else if(robot.direction=='E' && robot.command[0]
             =='L'){
        robot.direction='N';
    } else if(robot.direction=='N' && robot.command[0]
              =='R'){
        robot.direction='E';
    }else if(robot.direction=='N' && robot.command[0]
             =='L'){
        robot.direction='W';
    }else if(robot.direction=='W' && robot.command[0]
             =='R'){
        robot.direction='N';
    }else if(robot.direction=='W' && robot.command[0]
=='L'){
        robot.direction='S';
    }else if(robot.direction=='S' && robot.command[0]
             =='R'){
        robot.direction='W';
    }else if(robot.direction=='S' && robot.command[0]
             =='L'){
        robot.direction='E';
    }

    //command
if(robot.command[0]=='A'){
        if(robot.direction=='E'){
            robot.x++;
        } else if(robot.direction=='N'){
            robot.y++;
        }else if(robot.direction=='S'){
            robot.y--;
        }else if(robot.direction=='W'){
            robot.x--;
    }
}



for(int i=1;robot.command[i]!='\0';i++){
    if(robot.command[i]=='A'){
        if(robot.direction=='E'){
            robot.x++;
        }else if(robot.direction=='N'){
            robot.y++;
        }else if(robot.direction=='W'){
            robot.x--;
        }else if(robot.direction=='S'){
            robot.y--;
        }
    }else if(robot.command[i]=='R'){
        if(robot.direction=='E'){
            robot.direction='S';
        }else if(robot.direction=='W'){
            robot.direction='N';
        }else if(robot.direction=='N'){
            robot.direction='E';
        }else if(robot.direction=='S'){
            robot.direction='W';
        }
    }


    else if(robot.command[i]=='L'){
        if(robot.direction=='E'){
            robot.direction='N';
        }else if(robot.direction=='W'){
            robot.direction='S';
        }else if(robot.direction=='N'){
            robot.direction='W';
        }else if(robot.direction=='S'){
            robot.direction='E';
        }
    }

}

    printf("Value of (X,Y) %d  %d ",robot.x,robot.y);
    //printf("\nDirection is %c ",robot.direction);
    printf("\nDirection is %c", robot.direction);


return 0;
}
