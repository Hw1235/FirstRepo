#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validatePhoneNumber(char phone[]);

int main() {
    char phone[100];
    printf("Enter Phone number here :::::> ");
    scanf("%[^\n]", phone);

    printf("Your phone number is: %s\n", phone);

    int result = validatePhoneNumber(phone);
    if (result == 1) {
        printf("\nThat is correct for Bangladeshi phone number.\n");
    } else if (result == 0) {
        printf("\nThat is not correct for Bangladeshi phone number.\n");
    } else {
        printf("\nThat number is too short, please try again.\n");
    }

    return 0;
}

int validatePhoneNumber(char phone[]) {
    char sphone[100];
    int j = 0, count = 0;

    // ignore spaces, dots, and hyphens
    for (int i = 0; i < strlen(phone); i++) {
        if (phone[i] != ' ' && phone[i] != '.' && phone[i] != '-') {
            sphone[j++] = phone[i];
            count++;
        }
    }
    sphone[j] = '\0';

    // check if the phone number contains characters other than digits
    for (int i = 0; i < strlen(sphone); i++) {
        if (!isdigit(sphone[i])) {
            printf("That phone number contains non-digit characters.\n");
            return -1;
        }
    }

    // check if the phone number is the correct length
    if (count != 11) {
        return -2;
    }

    // check if the phone number is a valid Bangladeshi phone number
    if (sphone[0] == '0' && sphone[1] == '1') {
        return 1;
    } else {
        return 0;
    }
}
