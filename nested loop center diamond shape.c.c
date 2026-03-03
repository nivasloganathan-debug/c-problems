#include <stdio.h>
int main() {
    int n = 5;
    int i, j;

    for(j = 1; j <= 2*n; j++) {
        printf("* ");
    }
    printf("\n");

    for(i = n-1; i >= 1; i--) {

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        for(j = 1; j <= 2*(n - i); j++) {
            printf("  ");
        }

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for(i = 1; i <= n-1; i++) {

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        for(j = 1; j <= 2*(n - i); j++) {
            printf("  ");
        }

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for(j = 1; j <= 2*n; j++) {
        printf("* ");
    }

    return 0;
}