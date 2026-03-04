#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int index=0;
    for(int i=0;i<N;i++) {
        int isDuplicate=0;

        for(int j=0;j<i;j++) {
            if(arr[i]==arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            arr[index++] = arr[i];
        }
    }
    for(int i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}