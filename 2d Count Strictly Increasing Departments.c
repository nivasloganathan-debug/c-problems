#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for(int i = 0; i < R; i++)
    {
        int flag = 1;

        for(int j = 1; j < C; j++)
        {
            if(a[i][j] <= a[i][j-1])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}