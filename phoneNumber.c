#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    printf("Enter phone number: ");
char phone[50],newphone[50];

scanf("%[^\n]",phone);
int coutn=0;
int j=0;
if(strlen(phone)>=1 && phone[0]=='+'){
    strcpy(phone,&phone[1]);
}

if(strlen(phone)>=2 && phone[0]=='8' && phone[1]=='8'){
    strcpy(phone,&phone[2]);
}

for(int i=0;i<strlen(phone);i++){
    if(phone[i]!=' ' && phone[i]!='-'&& phone[i]!='.' && phone[i]!='('&& phone[i]!=')'){
        newphone[j++]=phone[i];
        coutn++;
    }
}
//newphone[j]='\0';
printf("\nFormated phone number: %s",newphone);

for(int i=0;i<strlen(newphone);i++){
     if(!isdigit(newphone[i])){
        printf("\nAny digit here!!\n");
        return 0;
    }
}
if(coutn==11){
    if(newphone[0]=='0' || newphone[1]=='1'){
        printf("\nIt's perfect number\n");
    }else{
        printf("Thats number is not perfect\n");
    }
}else{
    printf("\n invalid length phone number.\n ");
}
return 0;
}
