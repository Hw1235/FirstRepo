#include <stdio.h>
// char *getRoman(char*number[],int i);
int main() {
  char *units[] = {" ", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  char *tens[] = {" ", "X", "XX", "XXX", "XL", "L", "LI", "LXX", "LXXX", "XC"};
  char *houndred[] = {" ", "C",  "CC",  "CCC",  "CD","D", "DC", "DCC", "DCCC", "CM"};
  char *thousands[] = {" ", "M", "MM", "MMM"};
  int n;
  printf("Enter your number: ");
  scanf("%d", &n);

  printf("Number of %d = ", n);
  int u, t, h, th;

  u = n % 10;
  t = (n / 10) % 10;
  h = (n / 100) % 10;
  th = (n / 1000) % 10;

  printf("%s", thousands[th]);
  printf("%s", houndred[h]);
  printf("%s", tens[t]);
  printf("%s", units[u]);

  // printf("%s",getRoman(thousands,th));
  // printf("%s",getRoman(houndred,h));
  // printf("%s",getRoman(tens,t));
  // printf("%s",getRoman(units,u));

  return 0;
}
// char *getRoman(char*number[],int i){
// return number[i];
//
// }
