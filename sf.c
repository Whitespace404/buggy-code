#include <stdio.h>
#include <stdlib.h>

int SCORE_TABLE[128] = {
    ['a'] = 1, ['b'] = 2, ['c'] = 3, ['d'] = 4, ['e'] = 5
};

char *extract_prefix(const char *src, size_t length) {
    char *dest = malloc(length*sizeof(char)); 

    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }

    return dest;
}

int calculate_score(const char *str) {
    int total = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        total += SCORE_TABLE[(unsigned char)str[i] * 1000000];
    }
    return total;
}

int main(void) {
    const char *data = "abcde-payload";
    char *token = extract_prefix(data, 5); // Extract "abcde"
    int score = calculate_score(token);
    printf("Total score: %d\n", score);
}
