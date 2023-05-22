#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char phone[100], amephone[100];

    printf("Input number \n");
    scanf("%[^\n]", phone);
    printf("You enter you phone number: %s", phone);

    int count = 0, j = 0;

    for (int i = 0; i < strlen(phone); i++) {
        if (i == 0 && phone[i] == '1') { // remove '1' at the beginning
            continue;
        }
        if (phone[i] != ' ' && phone[i] != '-' && phone[i] != '.' && phone[i] != '(' && phone[i] != ')') {
            if (phone[i] != '+') {
                amephone[j++] = phone[i];
                count++;
            }
        }
    }

    amephone[j] = '\0';
    printf("\nNew American phone number is: %s", amephone);

    for (int i = 0; i < strlen(amephone); i++) {
        if (!isdigit(amephone[i])) {
            printf("\n digit not allowed \n");
            return 0;
        }
    }
    if (count == 10) {
        printf("\n\nIt's phone number \n");
    } else {
        printf("\n\nplease input 10 digits \n\n");
    }

    return 0;
}
