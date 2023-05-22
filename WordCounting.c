#include<stdio.h>
#include <ctype.h>
 #include<string.h>

void count_words(char *subtitles);


 int main() {
  char subtitles[]="That's the password: 'PASSWORD 123 456'!, cried the Special Agent.\nSo I fled.";
  //printf("Enter sencence: ");
  //int _= scanf("%[^\n]", subtitles);
  //"That's the password: 'PASSWORD 123'!", cried the Special Agent.\nSo I fled.


  count_words(subtitles);
  return 0;
}
void count_words(char *subtitles){
  char *word;
  char *delimiters = " \t\n\r\f\v.,:;?!-\"\()[]{}";
  int word_count = 0;
  char *word_list[1000];
  int count_list[1000];
  int i, j;

  // remove punctuation and other ....
  word=strtok(subtitles,delimiters);
  while(word !=NULL){
        // lowercase niye jaw ........
       for(i=0;word[i]!='\0';i++){
        word[i]=tolower(word[i]);
       // printf("1st word --> %s\n\n",word);
       }
    //remove puctuation word
    while(ispunct(word[0])){
        word++;
          printf("%s word+++\n\n",word);
    }
    for(i=strlen(word)-1;i>=0 && ispunct(word[i]);i--){
        word[i]='\0';
    }
       // Check if word is already in the word list
  int found = 0;
for (j = 0; j < word_count; j++) {
    if (strcmp(word, word_list[j]) == 0) {
        count_list[j]++;
        found = 1;
        break;
    }
}
if (!found) {
    word_list[word_count] = word;
        printf("\n\n\tword_list result %s\n\n",word_list[word_count]);

    count_list[word_count] = 1;
    printf("\n\nCount List result %d\n\n",count_list[word_count]);
    word_count++;
    printf("\n\n----t=Count List result %d\n\n",word_count);
}


    // Get next word
    word = strtok(NULL, delimiters);
     printf("next word is:  989898 %s\n\n\t",word);
  }
 // Print word counts
  for (i = 0; i < word_count; i++) {
    printf("%s: %d\n", word_list[i], count_list[i]);
  }
}


