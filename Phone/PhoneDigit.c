#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wordCount(char *subtitles) {
    char *word;
    char *punctuation = " \t\n\r\f\v.,:;?!-\"\()[]{}";
    int word_count = 0;
    char *word_list[1000];
    int count_list[1000];
    int i, j;

    // Split subtitles into words using whitespace and punctuation as delimiters
    word = strtok(subtitles, punctuation);
    while (word != NULL) {
        // Convert word to lowercase
        for (i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }
        // Remove leading and trailing punctuation from word
        while (ispunct(word[0])) {
            word++;
        }

        for (i = strlen(word) - 1; i >= 0 && ispunct(word[i]); i--) {
            word[i] = '\0';
        }
        // Check if word is already in the word list
        for (i = 0; i < word_count; i++) {
            if (strcmp(word, word_list[i]) == 0) {
                count_list[i]++;
                break;
            }
        }
        // If word is not in the word list, add it
        if (i == word_count) {
            word_list[word_count] = word;
            count_list[word_count] = 1;
            word_count++;
        }
        // Get next word
        word = strtok(NULL, punctuation);
    }

    // Print word counts
    for (i = 0; i < word_count; i++) {
        printf("%s: %d\n", word_list[i], count_list[i]);
    }
}
int main() {
    char subtitles[] = "That's the password: 'PASSWORD 123'!, cried the Special Agent.\nSo I fled.";
    wordCount(subtitles);
    return 0;
}
