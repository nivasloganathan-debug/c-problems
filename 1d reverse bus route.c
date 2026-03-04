#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int stops[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stops[i]);
    }
    int i=0;
    int j=n-1;
    while(i<j){
        int temp = stops[i];
        stops[i] = stops[j];
        stops[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",stops[i]);
    }

    return 0;
}