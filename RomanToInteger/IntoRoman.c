#include<stdio.h>

char *getNumber(char *number[],int i);


int main(){
    int num;
printf("input number ::::::::::> ");
scanf("%d",&num);
printf("  :::::::::: you entered number is  ::::::::::   %d> ",num);

char *oneditig[]={" ","I","II","III","IV","VI","VII","VIII","IX"};
char *towdigit[]={" ","X","XX","XXX","XL","L","LX","LXX","IX"};
char *houndred[]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
char *thoudands[]={" ","M","MM","MMM"};


int d,to,ho,th;
d=num%10;
to=(num/10)%10;
ho=(num/100)%10;
th=(num/1000)%10;

printf("%s",getNumber(thoudands,th));
printf("%s",getNumber(houndred,ho));
printf("%s",getNumber(towdigit,to));
printf("%s",getNumber(oneditig,d));

return 0;
}


char *getNumber(char *number[],int i){
    return number[i];


}
