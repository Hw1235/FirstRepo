#include <stdio.h>
int main() {
  int num, sum;
  printf("Input number : ");
  scanf("%d", &num);
  printf("You entered number %d\n", num);

  printf("Number of factors :  ");

  for (int i = 1; i < num; i++) {
    // search for factors
    if (num % i == 0) {
      printf("%d  ", i);
      // sum of factors
      sum = sum + i;

      //       if(i<num-i){
      //        printf("+ ");
      //       }
    }
  }
  printf("\nSum of factors is: %d", sum);
  // check condition that factors of sum Perfect  ,Abundant and Deficient
  if (num == sum) {
    printf("\n (Number == Sum) Perfect\n");
  } else if (num < sum) {
    printf("\n (sum > number) Abundant\n");
  } else if (num > sum) {
    printf("\n(sum < number) Deficient \n");
  }

  return 0;
}
