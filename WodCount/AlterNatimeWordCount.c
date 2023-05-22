#include<stdio.h>
#include<string.h>
#include<ctype.h>

void countOfWord(char *counting);
int main(){


return 0;
}
void countOfWord(char *counting){
    char *word;
    char *pun=" \t\n\r\f\v.,:;?!-\"\()[]{}";
    int word_count=0;
    char *word_list[1000];
    int count_list[1000];

    word=strtok(counting,pun);
    while(word!=NULL){
        //convert word to lowercase
        for(int i=0;i<word[i];i++){
            word[i]=tolower(word[i]);
        }
        //remove leading and trailing
        while(ispunct(word[0])){
            word++;
        }

    }
}
