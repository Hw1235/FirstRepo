#include<stdio.h>

//for swap elements prototype
void swap(int* a,int* b);

int main(){
int n;
printf("input array number: ");
scanf("%d",&n);
int arr[n];
//input panel
printf("input array elements ::=> ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
//output panel
printf("Your unsorted array ==> ");
for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
}
int len=sizeof(arr)/sizeof(arr[0]);
quickSort(arr,0,len-1);
printf("\n Sorted Array is ");
for(int i=0;i<len;i++){
    printf("%d f",arr[i]);
}

return 0;
}
//swap array elements
void swap(int* a,int* b){
int temp=*a;
*a=*b;
*b=temp;

}
//partition array elements
int partition(int arr[],int low,int high){

int pivot=arr[high];
int i=low-1;

for(int j=low;j<=high-1;j++){
    if(arr[j]<pivot){
        i++;
        swap(&arr[i],&arr[j]);
    }
}
swap(&arr[i+1],&arr[high]);
return (i+1);
}
//sorting array elements
void  quickSort(int arr[],int low,int high){

if(low<high){
        // pi is partitioning index, arr[p]
        //is now at right place
    int pi=partition(arr,low,high);

        // Separately sort elements before
        //partition and after partition
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}

}
