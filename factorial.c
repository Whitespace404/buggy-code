#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int factorial;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

   printf("%d! = %d\n", n, factorial);
    return 0;

}
