#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len, i, digit_count = 0;
    int decimal_index = -1; // দশমিক এর ইনডেক্স নিচ্ছি যেন সেটা না থাকলে -1 থাকে

    printf("Enter a phone number: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            digit_count++;
        }
        else if (str[i] == '.') {
            if (decimal_index == -1) {
                decimal_index = i;
            }
            else {
                printf("Invalid input\n");
                return 0;
            }
        }
        else if (str[i] != ' ' && str[i] != '-') {
            printf("Invalid input\n");
            return 0;
        }
    }

    if (digit_count == 10) {
        printf("Valid phone number: %s", str);
    }
    else if (digit_count == 11 && decimal_index == -1) {
        printf("Valid phone number: %s", str);
    }
    else if (digit_count == 12 && decimal_index == 2) {
        printf("Valid phone number: %s", str);
    }
    else {
        printf("Invalid phone number\n");
    }

    return 0;
}
