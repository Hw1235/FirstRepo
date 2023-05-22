#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len, i, digit_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // স্ট্রিং ইনপুট নেওয়া
                /*
                                    এখানে fgets() ফাংশনের মাধ্যমে টার্মিনাল থেকে ইনপুট লিখতে পারেন।
                                    এটি স্ট্রিং ভ্যারিয়েবল str এ ইনপুট টেক্সট সংরক্ষণ করবে। sizeof()
                                    কন্টেইনার মাধ্যমে প্রোগ্রাম টিকে জানা যায় কতগুলো ক্যারেক্টার পর্যন্ত ইনপুট গ্রহণ করা হবে।
                                     সবশেষে প্রিন্ট স্টেটমেন্ট দিয়ে ইনপুট লেখাটি প্রদর্শন করা হবে।
                */
    len = strlen(str);

    // স্ট্রিংটি পার্স করে সংখ্যাগুলোর সংখ্যা গণনা করা
    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            digit_count++;
        }
        else if (str[i] ==' ' && str[i] =='.' && str[i] == '-') {
            // যদি স্পেস, ডট বা হাইফেন থাকে  বাদ দেওয়া হবে
            printf("Invalid input\n");
            return 0;
        }
    }

    if (digit_count == 11) {
        printf("Valid phone number: %s", str);
    }
    else {
        printf("Invalid phone number\n");
    }

    return 0;
}

