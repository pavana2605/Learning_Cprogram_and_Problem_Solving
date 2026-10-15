
#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Upper half
    for (int i = 1; i <= N; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (N - i); j++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (int i = N; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (N - i); j++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
