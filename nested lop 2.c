#include <stdio.h>en
int main(){
    int i,j;
    int n=5;  
    for(i=1;i<=n;i++){        
        for(j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");                
    }
    return 0;
}
