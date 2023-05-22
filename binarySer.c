#include<stdio.h>

int main(){
int arr[]={1,2,3,4,5,7,8,9,10,12,23,25,30,40};

int r=sizeof(arr)/sizeof(arr[0])-1;


int l=0;
int search;
printf("Search number: ");
scanf("%d",&search);
while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==search){
        printf("%d number is index found %d",search,mid);
        break;
    }else if(arr[mid]<search){
        l=mid+1;
    }else{
        r=mid-1;
    }
}

}
