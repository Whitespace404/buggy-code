#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    char username[8];
    int is_admin;
};

void sanitize_and_copy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(void) {
    struct Account user;
    user.is_admin = 0; 
    printf("Enter username: ");
    char *incoming_input = malloc(10*sizeof(char));
    scanf("%s", incoming_input);

    sanitize_and_copy(user.username, incoming_input);
    printf("Username= %s \t is_admin = %d\n", user.username, user.is_admin);
    return 0;
}
