#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        int even = 0, odd = 0;

        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }

        if(even == odd)
            count++;
    }
    printf("%d", count);
    return 0;
}