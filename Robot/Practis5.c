#include<stdio.h>

struct Robot{
int x,y;
char command;
char der[10];
};

int main(){
struct Robot robot;
int x;
printf("Enter your Value of x ==> \n ");
scanf("%d",&robot.x);
int y;
printf("Enter your Value of y ==> \n ");
scanf("%d",&robot.y);
char  command;
printf("Enter your Value of command ==> \n ");
scanf(" %c",&robot.command);

char  der[6];
printf("Enter your Value of derection ==> \n ");
scanf("%s",robot.der);

//Command
if(robot.command=='A'){
    if(robot.der[0]=='E'){
      robot.x++;
    }else if(robot.der[0]=='N'){
        robot.y++;
    }else if(robot.der[0]=='S'){
        robot.y--;
    }else if(robot.der[0]=='W'){
        robot.x--;
    }
}
// Direction
if(robot.command=='E' && robot.der[0]=='R'){
    robot.command='S';
}else if(robot.command=='E' && robot.der[0]=='L'){
    robot.command='N';
}
else if(robot.command=='N' && robot.der[0]=='L'){
    robot.command='W';
}else if(robot.command=='N' && robot.der[0]=='R'){
    robot.command='E';
}
else if(robot.command=='W' && robot.der[0]=='R'){
    robot.command='N';
}else if(robot.command=='W' && robot.der[0]=='L'){
    robot.command='S';
}

else if(robot.command=='S' && robot.der[0]=='R'){
    robot.command='W';
}else if(robot.command=='S' && robot.der[0]=='L'){
    robot.command='E';
}


for(int i=1;robot.der[i]!=0;i++){
    if(robot.der[i]=='A'){
        if(robot.command=='E'){
            robot.x++;
        }else if(robot.command=='N'){
            robot.y++;
        }else if(robot.command=='W'){
            robot.x--;
        }else if(robot.command=='S'){
            robot.y--;
        }
    }

    else if(robot.der[i]=='R'){
        if(robot.command=='E'){
            robot.der[i]='S';
        }else if(robot.command=='N'){
            robot.der[i]='E';
        }else if(robot.command=='W'){
            robot.der[i]='N';
        }else if(robot.command=='S'){
            robot.der[i]='E';
        }
    }   else if(robot.der[i]=='L'){
        if(robot.command=='E'){
            robot.der[i]='N';
        }else if(robot.command=='N'){
            robot.der[i]='W';
        }else if(robot.command=='W'){
            robot.der[i]='S';
        }else if(robot.command=='S'){
            robot.der[i]='W';
            }
        }
    }

    printf(" Value of (x,y)= %d  %d",robot.x,robot.y);
printf(" Robot of direction %c",robot.command);
    return 0;
}




