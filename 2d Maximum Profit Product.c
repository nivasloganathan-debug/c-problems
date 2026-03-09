#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxProduct = -1000000;
    for(int i = 0; i < R; i++) {
        for(int j = i + 1; j < R; j++) {   
            for(int a = 0; a < C; a++) {
                for(int b = 0; b < C; b++) {
                    int product = arr[i][a] * arr[j][b];
                    if(product > maxProduct) {
                        maxProduct = product;
                    }
                }
            }
        }
    }

    printf("%d", maxProduct);
    return 0;
}