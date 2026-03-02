#include <stdio.h>
int main(){
    int n=5;
    int i=1;
    i=1;
    while(i<=2*n-1){
        printf("*");
        i++;
    }
    printf("\n");

    i=n-1;
    while(i>=1){
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        j=1;
        while(j<=2*(n-i)-1){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    i=2;
    while(i<=n-1){
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        j=1;
        while(j<=2*(n-i)-1){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    i=1;
    while(i<=2*n-1){
        printf("*");
        i++;
    }
    return 0;
}