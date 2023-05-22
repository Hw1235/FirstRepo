#include <stdio.h>

int main() {
    int num[] = {5,4,3,2,1};
    int len = sizeof(num) / sizeof(num[0]) - 1;

    for (int i = 0; i <= len/2; i++) {
        int temp = num[i];
        num[i] = num[len-i];
        num[len-i] = temp;
    }

    for (int i = 0; i <= len; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
