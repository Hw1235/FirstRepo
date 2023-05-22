    #include <stdio.h>
    #include <string.h>

    int main() {
      printf("Enter phone number: ");
      char phone[50], newphone[50];

    //  scanf("%[^\n]", phone);
    gets(phone);
      int coutn = 0;
      int j = 0;

      if (strlen(phone) >= 1 && phone[0] == '+') {
        strcpy(phone, &phone[1]);
      }
      if (strlen(phone) >= 1 && phone[0] == '1') {
        strcpy(phone, &phone[1]);
      }
      for (int i = 0; i < strlen(phone); i++) {
        if (phone[i] != ' ' && phone[i] != '-' && phone[i] != '.' &&
            phone[i] != '(' && phone[i] != ')') {
          newphone[j++] = phone[i];
          coutn++;
        }
      }
      printf("\nFormated phone number: %s", newphone);

      return 0;
    }

