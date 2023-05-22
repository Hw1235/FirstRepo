#include <stdio.h>

int main() {
    int num = 12345;

    for (int i = 4; i >= 0; i--) {
        long long int scale = 1;
        for (int j = 0; j < i; j++) {
            scale *= 1000;
        }
        printf("Scale = %lld\n", scale);

        if (num >= scale) {
            (num / scale);
            // printf(" %s", scales[i]);
            num %= scale;
            if (num) {
                printf(" num ");
                // spell_number(num);
            }
            printf("\n");
            // return 0;
        }
    }

    return 0;
}
