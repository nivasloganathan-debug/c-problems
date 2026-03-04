#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int highest = INT_MIN;
    int secondHighest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        }
        else if(arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }
    if(secondHighest == INT_MIN)
        printf("No second highest salary");
    else
        printf("%d", secondHighest);

    return 0;
}
