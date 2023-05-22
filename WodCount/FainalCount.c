#include<stdio.h>
void numberToWords(long long int num);
int main(){
//long long int num=14;
 //long long int num=100;
 //long long int num=120;
 long long int num=1323;
 numberToWords(num);


return 0;
}
void numberToWords(long long int num){
  char *onedigit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                          "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                          "nineteen"};
      char *twodigit[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
      char *tens[] = {"", "thousand ", "million ", "billion "};

      if(num<0 || num>999999999999){
        printf("\n\nNumber out of range\n\n");
        return;
      }


        if(num<20){
            printf("%s ",onedigit[num]);
            return;
        }

        if(num<100){
                printf("%s ",twodigit[num/10]);
        if(num%10){
            printf("- %s",onedigit[num%10]);
        }
            return;
        }
          if(num<1000){
                printf("%s hundred ",onedigit[num/100]);
        if(num%100){
                printf("and ");
        numberToWords(num%100);
        }
            return;
        }

    for(long long i=1000000000000;i>=1;i/=1000){
        if(num>=i){
            numberToWords(num/i);
            printf("%s ",tens[(int)log10(i)/3]);
            num%=i;

            if(num){
                printf("And ");
            }

        }


    }

}
