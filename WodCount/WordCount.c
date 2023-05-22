#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void format_word(char *word, size_t len)
{
    for(size_t i=0; i<len; i++)
    {
        word[i] = tolower(word[i]);
    }
    if(word[0] == '\'')
    {
        for(size_t i=0; i<len; i++)
        {
            word[i] = word[i+1];
        }
        len--;
    }
    if(word[len-1] == '\'')
    {
        word[len-1] = '\0';
    }
}
int count_words(const char *sentence, word_count_word_t *words)
{
    int count = 0;
    char snt[MAX_WORD_LENGTH + MAX_WORDS];
    strcpy(snt, sentence);
    char *word = strtok(snt, DELIM);
    while(word != NULL)
    {
        size_t len = strlen(word);
        format_word(word, len);
        bool found = false;
        for(int i=0; i<count; i++)
        {
            if(strcmp(words[i].text, word)==0)
            {
                found = true;
                words[i].count++;
            }
        }
        if(!found)
        {
            count++;
            strcpy(words[count-1].text, word);
            words[count-1].count = 1;
        }

        word = strtok(NULL, DELIM);
    }

    return count;
}
