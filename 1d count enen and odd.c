#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int day;
    int working=0,holiday=0;
    for(int i=0;i<N;i++) {
        scanf("%d",&day);
        if(day%2==0)
            working++;
        else
            holiday++;
    }
    printf("even: %d\n",working);
    printf("odd: %d\n",holiday);

    return 0;
}