#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0; i<n;i++){
        scanf("%d", &marks[i]);
    }
    int x;
    scanf("%d",&x);
    int count=0;
    for(int i=0; i<n; i++){
        if(marks[i]==x){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}