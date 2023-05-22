#include <stdio.h>
#include<math.h>

void spell_number(long long int num);

int main() {
    long long int num;
    printf("Enter a number between 0 and 999,999,999,999: ");
    scanf("%lld", &num);
    spell_number(num);
    return 0;
}

void spell_number(long long int num) {
    const char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                          "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                          "nineteen"};
    const char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    const char *scales[] = {"", "thousand", "million", "billion", "trillion"};

    if (num < 0 || num > 999999999999) {
        printf("Number out of range.\n");
        return;
    }

    if (num < 20) {
        printf("%s\n", ones[num]);
        return;
    }

    if (num < 100) {
        printf("%s", tens[num / 10]);
        if (num % 10) {
            printf("-%s\n", ones[num % 10]);
        } else {
            printf("\n");
        }
        return;
    }

    if (num < 1000) {
        printf("%s hundred", ones[num / 100]);
        if (num % 100) {
            printf(" and ");
            spell_number(num % 100);
        } else {
            printf("\n");
        }
        return;
    }


           for (long long int scale = 1000000000000; scale >= 1; scale /= 1000) {
    if (num >= scale) {
        spell_number(num / scale);
        printf(" %s ", scales[(int)log10(scale) / 3]);
        num %= scale;
        if (num) {
            printf("and ");
            spell_number(num);
        }
        return;
    }
}

//    for (int i = 4; i >= 0; i--) {
//        long long int scale = 1;
//        for (int j = 0; j < i; j++) {
//            scale *= 1000;
//            printf("Scale=d%d\n",scale);
//        }
//         printf("\n Scale IF %d= \n",scale);
//        if (num >= scale) {
//                printf("\n Number%d= \n",num);
//
//            spell_number(num / scale);
//            printf("ki %s\n", scales[i]);
//            num %= scale;
//            if (num) {
//                printf(" \t\tif Number \n\n");
//                spell_number(num);
//            }
//            printf("\n");
//            return;
//        }
//    }
}
