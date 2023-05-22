#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
char phone[100],new_phone[100];
printf("input number ::::> ");
int j=0,count=0;

scanf("%[^\n]",phone);
printf("You entered phone number is: %s\n",phone);


//check space dot hyphen
for(int i=0;i<strlen(phone);i++){
    if(phone[i]!=' ' && phone[i]!='-' && phone[i]!='.' && phone[i]!='(' && phone[i]!='+'){
       new_phone[j++]=phone[i];
       count++;
       }
}
//not space, dot, hyphen
new_phone[j]='\0';
printf("New Phone number is: %s\n",new_phone);

for(int i=0; i<strlen(new_phone);i++){
    //if(!isdigit(new_phone[i]))

      if(new_phone[i]<'0'||new_phone[i]>'9')  {
        printf("Yes any character here. ");
    return 0;
    }
}

if(count==11){
    if(new_phone[0]=='0'|| new_phone[1]==1){
        printf("That is perfect phone number ");
    }else{
        printf("NOt perfect phone number ");
    }
}else{

    printf("phone number is invalid length digits ");
}
return 0;
}
