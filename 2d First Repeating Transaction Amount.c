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
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int current = arr[i][j];
            for(int x = i; x < R; x++) {
                int yStart = (x == i) ? j + 1 : 0;

                for(int y = yStart; y < C; y++) {
                    if(current == arr[x][y]) {
                        printf("%d", current);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}