#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean_phone_number(const char *input, char *output) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (isdigit(input[i])) {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';

    if (output[0] == '1' && j == 11) {
        memmove(output, output + 1, j);
        output[j - 1] = '\0';
    }
}

int main() {
    const char *inputs[] = {
        "+1 (613)-995-0253",
        "613-995-0253",
        "1 613 995 0253",
        "613.995.0253"
    };

    for (int i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++) {
        char output[12];
        clean_phone_number(inputs[i], output);
        printf("Cleaned: %s\n", output);
    }

    return 0;
}
