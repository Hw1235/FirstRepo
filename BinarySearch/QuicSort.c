#include <stdio.h>

void quickSort(int num[], int low, int high) {
    if (low < high) {
        int start = low;
        int end = high;
        int mid = start + (end - start) / 2;
        int pivot = num[mid];

        while (start <= end) {
            while (num[start] < pivot) {
                start++;
            }
            while (num[end] > pivot) {
                end--;
            }
            if (start <= end) {
                int temp = num[start];
                num[start] = num[end];
                num[end] = temp;
                start++;
                end--;
            }
        }
        quickSort(num, low, end);
        quickSort(num, start, high);
    }
}

int main(void) {

  int num[100];

  printf("Enter your array of 100: ");
  for(int i = 0; i < 100; i++) {
  scanf("%d", &num[i]);
  }

  quickSort(num, 0,100);
 printf("Sorted array: ");

  for(int i = 0; i < 100; i++) {
    printf("%d ", num[i]);
  }

}
