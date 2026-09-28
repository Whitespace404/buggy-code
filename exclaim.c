#include <stdio.h>

int square(int n) {
    return n*n;
}

int main(void) {
    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    printf("%d \n", square("abc"));
}
