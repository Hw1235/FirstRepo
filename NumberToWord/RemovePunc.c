
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
char word[]="hello";
 char *delimiters="\t\n\r\f\v.,;:?!-\"()[]{}";
//int word_count=0;
//char *word_list[1000];
//int count_list[1000];

//split subtitles into word using whitespace and punctuation as delimiters
word=strtok(subtitles, delimiters);
printf("Word %s",word);

}
