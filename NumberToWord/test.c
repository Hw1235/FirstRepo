void count_word(char *subtitles){
    char *word;
    char *delimiters="\t\n\r\f\v.,;:?!-\"()[]{}";
    int word_count=0;
    char *word_list[1000];
    int count_list[1000];

    //split subtitles into words using whitespace and punctuation as delimiters
    word=strtok(subtitles, delimiters);
    while(word!=NULL){
        //convert each word to lowercase
        for(int i=0; word[i]; i++){
            word[i] = tolower(word[i]);
        }

        //store the word in the word_list if it is not already in it
        int index = -1;
        for(int i=0; i<word_count; i++){
            if(strcmp(word, word_list[i]) == 0){
                index = i;
                break;
            }
        }
        if(index == -1){
            index = word_count;
            word_list[word_count] = word;
            count_list[word_count] = 0;
            word_count++;
        }

        //increment the count for the current word
        count_list[index]++;

        //get the next word
        word=strtok(NULL, delimiters);
    }

    //print the word counts
    for(int i=0; i<word_count; i++){
        printf("%s: %d\n", word_list[i], count_list[i]);
    }
}
int main(){
    char subtitles[]="That's the password: 'PASSWORD 123'!, cried the Special Agent.\nSo I fled.";
    count_word(subtitles);

    return 0;
}
