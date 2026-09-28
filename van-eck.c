#include <stdio.h>
#include <stdlib.h>

// A program to generate the nth term of the Van-Eck Sequence
int main(void) {
    int n;
    printf("> ");
    scanf("%d", &n);

    int* seq = malloc(n*sizeof(int));
    int* seq_start = seq;

    seq[0] = 0;
    
    for (int i = 1; i<n; ++i) {
        int j = i;
        int count = 0;

        while (j > 0) {
            ++count;
            if (seq[j--] == seq[i]) {
                seq[i] = count;
                break;
            }
        }

        if (count == j) {
            seq[i] = 0;
        }
    }

    for (int i = 0; i<n; ++i) {
        printf("%d ", seq_start[i]);
    }
    printf("\n");
}

