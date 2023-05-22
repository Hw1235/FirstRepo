#include<stdio.h>
int main(){
int num;
    for (long long int scale = 1000000000000; scale >= 1; scale /= 1000) {
    if (num >= scale) {
        spell_number(num / scale);//40
        printf(" %s ", scales[(int)log10(scale) / 3]);/40000
        num %= scale;//num=num%scale===4210
        if (num) {
            printf("and ");
            spell_number(num);
        }
        return;
    }
}
}

for (long long int scale = 1000000000000; scale >= 1; scale /= 1000) {
    if (num >= scale) { //40000
        spell_number(num / scale);//4
        printf(" %s ", scales[(int)log10(scale) / 3]);//6/3=2
        num %= scale;
        if (num) {
            printf("and ");
            spell_number(num);
        }
        return;
    }
}

