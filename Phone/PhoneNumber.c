#include<stdio.h>
#include<string.h>

int main(){
char phone[100],new_phone[100];
scanf("%[^\n]",phone);
printf("You entered phone number is: %s\n",phone);



int len=strlen(phone);


int digit_count=0,k=0;


for(int i=0;i<len;i++){
    if(isdigit(phone[i])){
        digit_count++;
    }

    for(int j=0;phone[j]!='\0';j++){
        if(phone[j]!=' '){
                new_phone[k++]=phone[j];

        }
    }

    new_phone[k]='\0';
}
printf("new String is : %s",new_phone);





if((phone[0]=='0')||(phone[1]=='1')){




    printf("is has 0 and 1 in first and second index \n");
    if(strlen(phone)==11){
    printf("\nThe phone Phone number 11 digits\n");
    }else{
        printf("The number is Wrong and try again ");
    }
}
//}else{
//        printf("is has not  0, 1 in first and second index \n");
//
//}

//if(strlen(phone)==11){
//    printf("\nThe phone Phone number 11 digits\n");
//}else{
//    printf("\nDose not phone number is 11 digits\n");
//}



return 0;
}
