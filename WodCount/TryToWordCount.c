#include<stdio.h>
void WordCount(char *sentence[]);
int main(){
char sen[]="That's the password: 'PASSWORD 123 456'!, cried the Special Agent.\nSo I fled.";
//scanf("%[^/n]"sen);
WordCount(sen);



return 0;
}
void WordCount(char *sentence[]){
char *word;
char puns[]=" \t\n\r\f\v.,:;?!-\"\()[]{}";
int wordCount=0;
char *wordList[1000];
char *counterList[1000];

word=strtok(sentence,puns);
printf("Word =%s",word);

while(word!=NULL){
    // To lower case all sentence
    for(int i=0;word[i]!='\0';i++){
        word[i]=tolower(word[i]);
        printf("\nWord lower Case: %s",word);
    }
    //remove Punctuation marks
    while(ispunct(word[0])){
        word++;
    }

}



}
