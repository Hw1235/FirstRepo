#include<stdio.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;

    for(int j=0;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high){
    if(low<high){

        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main(){
//int arr[]={90,1,8,5,6,7,10,85,65,98,42};
int n;
scanf("%d",&n);
 //int arr[]={90,1,8,5,6,7,10,85,65,98,42};
 int arr[n];
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }



int len=sizeof(arr)/sizeof(arr[0]);
partition(arr,0,len-1);

for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
}

return 0;
}

