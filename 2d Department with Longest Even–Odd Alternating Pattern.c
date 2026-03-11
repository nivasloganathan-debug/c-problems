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
    int max = 0;
    int index = 0;
    for(int i = 0; i < R; i++)
    {
        int count = 1;
        for(int j = 0; j < C-1; j++)
        {
            if((a[i][j] % 2 == 0 && a[i][j+1] % 2 != 0) ||
               (a[i][j] % 2 != 0 && a[i][j+1] % 2 == 0))
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count > max)
        {
            max = count;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}