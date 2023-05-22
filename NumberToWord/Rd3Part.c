#include<stdio.h>


void numberToword(long long int num);
int main(){
int num;
printf("Enter number: ");
scanf("%d",&num);

printf(" %d = ",num);
numberToword(num);

return 0;
}

void numberToword(long long int num){
char *ones[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
            "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen","nineteen"};


  char *two[] = {"", "", "twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

  char *tens[] = {"","Thousands","Billion","Million","Trillion"};

  if(num<0 || num>999999999999){
    printf("out of range !!!");
    return;

  }

  if(num<20){
    printf("%s",ones[num]);
    return;
  }
  if(num<100){

    printf("%s ",two[num/10]);
    if(num%10){
        printf("%s ",ones[num%10]);//21%10=1
    }else{
        printf("\n");
    }
    return;

  }

  if(num<1000){
    printf("%s  Hundred ",ones[num/100]);
    if(num%100){
        printf(" and ");
        numberToword(num%100);
    }else{
        printf("\n");
    }
    return ;

  }


  for()




}
