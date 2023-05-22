#include<stdio.h>
#include<ctype.h>
#include<string.h>

void count_word(char *subtitles){
char *word;
char *delimiters="\t\n\r\f\v.,;:?!-\"()[]{}";
int word_count=0;
char *word_list[1000];
int count_list[1000];

//split subtitles into word using whitespace and punctuation as delimiters
word=strtok(subtitles, delimiters);
while(word!=NULL){
    for(int i=0;word[i];i++){
        word[i]=tolower(word[i]);
    }
}

}

int main(){
char subtitles[]="Hello Bangladesh, how are your Today.";
count_word(subtitles);

return 0;
}
