#include <stdio.h>
#include <string.h>

void binaryser(int arr[], int l, int r);

int main() {
  int n;
  printf("Enter number:::::> ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int l = 0;
  int r = sizeof(arr) / sizeof(int) - 1;

  binaryser(arr, l, r);
  return 0;
}
void binaryser(int arr[], int l, int r) {
  int mid, target;
  printf("search number is: ");
  scanf("%d", &target);
  while (l <= r) {
    mid = (l + r) / 2;
    if (arr[mid] == target) {
      printf("%d number array index is %d", target, mid);
      break;
    } else if (arr[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  if (l > r) {
    printf("%d not found in the array ", target);
  }
}
