#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char ph_num[100], ph[100];
  int j = 0, count = 0;

  printf("Input phone number:");
  scanf("%[^\n]", ph_num);
  printf("your phone number is: %s \n", ph_num);
  int len = strlen(ph_num);
  for (int i = 0; i < len; i++) {
    if (ph_num[i] != ' ' && ph_num[i] != '.' && ph_num[i] != '-' &&
        ph_num[i] != '(' && ph_num[i] != ')') {
      ph[j++] = ph_num[i];
      count++;
    }
  }
  ph[j] = '\0';
  printf("new phone number is: %s", ph);
  // check letters......0-9
  for (int i = 0; i < strlen(ph); i++) {
    if(ph[i]<'0' || ph[i]>'9'){
      printf("\nNot a perfect number beacause it has a character:");
       return 0;
    }
  } if(count==12){
    printf("\n\n\nIts a perfect nummber\n\n\n");


  }

  return 0;
}
