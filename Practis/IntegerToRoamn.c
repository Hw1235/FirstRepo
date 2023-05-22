#include<stdio.h>
int IntToRoman(int num);
int main(){
int num;
printf("Enter number is: ");
scanf("%d",&num);
printf("Your number is: %d=",num);
 IntToRoman(num);
return 0;
}
int IntToRoman(int num){
char *firtsDigit[]={"","I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX"};
char *secondDigit[]={"","","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
char *tendDigit[]={"","","C","CC","CCC","XD","D","DC","DCC","DCCC","CM"};
char *thousandDigit[]={"","","C","CC","CCC","XD","D","DC","DCC","DCCC","CM"};

if(num<20){
    printf("%s",firtsDigit[num]);
}
}
