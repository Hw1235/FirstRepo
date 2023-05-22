#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 128
#define MAX_WORDS 256
#define DELIM " ,.-"

typedef struct {
    char text[MAX_WORD_LENGTH];
    int count;
} word_count_word_t;

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

word_count_word_t* count_words(const char *sentence, int *count)
{
    *count = 0;
    word_count_word_t *words = malloc(MAX_WORDS * sizeof(word_count_word_t));
    if(words == NULL)
    {
        return NULL;
    }

    char *snt = strdup(sentence);
    char *word = strtok(snt, DELIM);
    while(word != NULL)
    {
        size_t len = strlen(word);
        format_word(word, len);
        bool found = false;
        for(int i=0; i<*count; i++)
        {
            if(strcmp(words[i].text, word)==0)
            {
                found = true;
                words[i].count++;
            }
        }
        if(!found)
        {
            (*count)++;
            if(*count > MAX_WORDS)
            {
                words = realloc(words, *count * sizeof(word_count_word_t));
                if(words == NULL)
                {
                    return NULL;
                }
            }
            strcpy(words[*count-1].text, word);
            words[*count-1].count = 1;
        }

        word = strtok(NULL, DELIM);
    }

    free(snt);
    return words;
}

int main()
{
    char sentence[500] ;
    printf("Enter a sentence: ");
    scanf("%[^\n]",sentence);

    int count;
    word_count_word_t *words = count_words(sentence, &count);
    if(words == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Word count: %d\n", count);
    for(int i=0; i<count; i++)
    {
        printf("%s: %d\n", words[i].text, words[i].count);
    }

    free(words);
    return 0;
}
