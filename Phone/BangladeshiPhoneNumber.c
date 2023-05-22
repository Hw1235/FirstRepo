#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
char phone[50],newphone[50];

printf("input Phone number: ");
scanf("%[^\n",phone);
int count=0,j=0;

if(strlen(phone)>=1 && phone[0]=='+'){
    strcpy(phone,&phone[1]);
}

if(strlen(phone)>=2 && phone[0]=='8'&& phone[1]=='8'){
    strcpy(phone,&phone[2]);
}


for(int i=0;i<strlen(phone);i++){
    if(phone[i]!='.' && phone[i]!=' '&& phone[i]!='('&& phone[i]!=')' && phone[i]!='-'){
        newphone[j++]=phone[i];
    }
}
newphone[j]='\0';
printf("Formated phone number is: %s",newphone);

return 0;
}
