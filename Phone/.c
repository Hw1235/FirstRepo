#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //starting part
    char phone[20];
    char new_phone[20];

    // j check for space
    int j=0, count=0;

    //input part
    printf("input valid phone number: ");
    scanf("%[^\n]", phone);

    //output part
    printf("That phone number you entered: %s\n", phone);

    //input number and remove spaces, dots, and hyphens
    for(int i = 0; i < strlen(phone); i++) {
        if(phone[i] != ' ' && phone[i] != '-' && phone[i] != '.') {
            new_phone[j++] = phone[i];
            count++;
        }
    }

    new_phone[j] = '\0';
    printf("Formatted phone number: %s\n", new_phone);

    // check if phone number contains non-digit characters
    for(int i = 0; i < strlen(new_phone); i++) {
        if(!isdigit(new_phone[i])) {
            printf("Not a perfect phone number. Contains non-digit characters.\n");
            return 0;
        }
    }

    // check if phone number length is valid
    if(count == 11) {
        if(new_phone[0] == '0' || new_phone[1] == '1') {
            printf("Perfect phone number\n");
        } else {
            printf("Not a perfect phone number. Invalid area code.\n");
        }
    } else {
        printf("Not a perfect phone number. Invalid length.\n");
    }

    return 0;
}
