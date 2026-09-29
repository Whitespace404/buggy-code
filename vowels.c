#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char *strip_vowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i])) {
            count++;
        }
    }

    char *result = malloc(count*sizeof(char));

    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i])) {
            result[idx++] = str[i];
        }
    }
    return result;
}

int main(void) {
    char *text = "the quick brown fox jumps over the lazy dog";
    char *filtered = strip_vowels(text);

    printf("Filtered string: %s\n", filtered);

    return 0;
}
