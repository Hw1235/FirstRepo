#include<stdio.h>
int main(){

char phone[100],ph[100];
printf("Enter phone number: ");
scanf("%[^\n]",phone);
printf("\nYou entered phone number is: %s\n",phone);
int count=0,j=0;



for(int i=0;i<strlen(phone);i++){
    if(phone[i]!=' '&& phone[i]!='-' && phone[i]!='.'  && phone[i]!='(' && phone[i]!=')'){
        ph[j++]=phone[i];
        count++;
    }
}
   ph[j]='\0';

   printf("%s",ph);


   for(int i=0;i<strlen(ph); i++){
    if(ph[i]<'0' || ph[i]>'9'){
        printf("\n Digit presents here. \n");
        return 0;
    }
   }
   if(count==11){
    if(ph[0]=='0' || ph[0]=='1'){

        printf("That's number is BD ");
    }else{
           do{
                 printf("Thats's number is not BD");
                 printf("Enter the corrent number ");
            }while(1);

    }
   }else{
    printf("Invalid phone number !!!");
   }


return 0;
}
