#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            int top=i-1;
            int left=j-1;
            int bottom=2*n-1-i;
            int right=2*n-1-j;
            int min=top;
            if(left<min) min=left;
            if(bottom<min) min=bottom;
            if(right<min) min=right;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}