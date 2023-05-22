    #include<stdio.h>
    int main(){
        int num=4000000;
    for (long long int scale = 1000000000000; scale >= 1; scale /= 1000) {
    printf("i=%ld\n\n",scale);
    if(num>=scale){
        printf("\n\n IF_i=%ld",scale);
        printf("\n\n IF_Num=%ld",num);

        num=num/scale;
        printf("\n\n\n (num/i)=%d\n",num);//4
    }
    }
     return 0;

    }

