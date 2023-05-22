#include<stdio.h>
void swap(int *a,int *b);
int partition(int arr[],int low,int high);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int arr[n];

    //input array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //print array
    printf("Unsorted array is: ==> ");
    for(int i=0;i<n;i++){
       printf("%d  ",arr[i]);
    }

    //sort array using quicksort
    int len = sizeof(arr)/sizeof(arr[0]);
  partition(arr,0,len-1);
     quicksort(arr, 0, len-1);


     //print sorted array
    printf("\nSorted Array is: ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}

int partition(int arr[],int low,int high){
int pivoit=arr[high];
int i=low-1;

for(int j=0;j<=high-1;j++){
    if(arr[j]<pivoit){
        i++;
        swap(&arr[i],&arr[j]);
    }
}
swap(&arr[i+1],&arr[high]);
return (i+1);
}

void quicksort(int arr[],int low,int high){
if(low<high){
    int pi =partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
}
}






