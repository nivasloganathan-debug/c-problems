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
    int minSum = 1000000000;
    int deptIndex = 0;
    for(int i = 0; i < R; i++) {
        int sum = 0;
        for(int j = 0; j < C; j++) {
            sum += arr[i][j];
        }
        if(sum < minSum) {
            minSum = sum;
            deptIndex = i;
        }
    }
    printf("%d", deptIndex);
    return 0;
}