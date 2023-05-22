#include<stdio.h>
void NumberToWord(long long int num);
int main(){
long long int num=1011;
NumberToWord(num);

return 0;
}
void NumberToWord(long long int num){
    char *onec[]={"zero ","one ","two ","three ","four ","five ", "six ","seven ","eight ", "nine ","ten ", "eleven ", "twelve ",
    "thirteen ","fourteen ", "fifteen ","sixteen ", "Seventeen ", "eighteen ","nineteen "};

    char *twis[]={"  "," ","twenty ","thirty ","forty ","fifty ", "sixty ","seventy ","eighty ", "ninety "};
     char *tenplc[]={"  ","thousands  ","billion ","million "};

            if(num<0|| num>999999999999){
                printf("\nThat number out of range\n");
                return ;
            }

            if(num<20){
                printf("%s ",onec[num]);
                return ;
            }

             if(num<100){
                printf("%s",twis[num/10]);
                if(num%10){
                    printf("%s ",onec[num%10]);
                }
                return ;
            }
            if(num<1000){
                printf("%s hundred ",onec[num/100]);
                if(num%100){
                    printf(" and ");
                    NumberToWord(num%100);
                }
                return;
            }


            for(long long int i=10000000000000;i>=1;i/100){
                if(num>=i){
                        NumberToWord(num/i);
                    printf("%s ",tenplc[(int)log10(i/3)]);
                    num=num%i;
                }
            }
    }

