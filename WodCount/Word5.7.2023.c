#include<stdio.h>
#include<string.h>
#include<ctype.h>
void WordCount(char* sen);
int main(){
char sentence[1000];
printf("Enter Sentence: -> ");
scanf("%[^\n]",sentence);
WordCount(sentence);

return 0;

}
void WordCount(char* sen){
char *word;
char *pun=" \t\n\v\f\r.,\"\:;?!{}()[]-";
char *wordList[1000];
int countList[100];
int CountWord=0;

//separate 1st Word From sentence and punctuation
word=strtok(sen,pun);
printf("separate 1st Word From sentence ===> %s\n",word);
while(word!=NULL){
        //that word transfer to lower case
    for(int i=0;i<strlen(word);i++){
        word[i]=tolower(word[i]);
        printf("\t2nd step tolower case %s\n",word);
    }
    //remove punctuation mark form 0 index in word
    while(ispunct(word[0])){
        word++;
    }
    for(int i=strlen(word)-1;i>=0 && ispunct(word[i]);i--){
            word[i]='\0';
    }
}
}
