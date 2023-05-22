        #include<stdio.h>
        void NumberToword(long long int num);
        int main(){
        long long int num;

        scanf("%ld",&num);
        NumberToword( num);

        return 0;
        }
        void NumberToword(long long int num){

        char *onedigit[]={"zero","one", "two","three", "four", "five", "Six", "Seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen ","sixteen", "seventeen", "eighteen", "nineteen"};

        char *twodigit[]={" ","", "twenty","thirty", "forty", "fifty", "Sixty", "Seventy", "eighty", "ninety"};

        char *ten[]={" ","thousands","billion", "million"};

        if(num<0 || num>999999999999){
            printf("\nNumber out of range\n");
            return;
        }

        if(num<20){
            printf("%s ",onedigit[num]);
            return;
        }
          if(num<100){
            printf("%s ",twodigit[num/10]);
            if(num%10){
                printf("%s ",onedigit[num%10]);
            }
            return;
        }

          if(num<1000){
            printf("%s hundred ",onedigit[num/100]);
            if(num%100){
                    printf("and ");
                NumberToword(num%100);
            }
            return;
        }

        for(long long int i=1000000000000;i>=1;i/=1000){
            if(num>=i){
                NumberToword(num/i);//40000/1000=40
                printf("%s",ten[(int)log10(i)/3]);//4/3=1= 40 thousands

                /*   log10 er kaj 1st digit ta rekhe baki digit guli count kore
                    log10 ekta mathematical function, jeta kono number er base 10 er
                    logarithm return kore. Base 10 er logarithm mane holo ekta number er
                    10 diye power kora jay jei number ta diye result ti pai
                */
                num=num%i;
                if(num){
                    printf("and ");
                }
            }
        }
        }
