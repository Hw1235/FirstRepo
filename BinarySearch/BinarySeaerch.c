    #include<stdio.h>
    #include<string.h>

    int main(){
        int n;
        printf("Enter number:::::> ");
        scanf("%d",&n);
         int arr[n];
        for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
        }
    int l=0;
    int r=sizeof(arr)/sizeof(int)-1;

    int mid;

    int target;
    printf("search the number==>");
    scanf("%d",&target);
     printf("You search the number %d \n",target);
    while(l<=r){
           mid =(l+r)/2;
        if(arr[mid]==target){
           printf("%d number array index is %d",target,mid);
            break;
        }else if(arr[mid]<target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    if(l>r){
        printf("%d not found in the array ",target);
    }
    return 0;
    }
