#include <stdio.h>
int isPrime(int n)
{
    if(n <= 1)
        return 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
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
        for(int j = 0; j < C; j++)
        {
            if(!isPrime(a[i][j]))
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            count++;
    }
    printf("%d", count);
    return 0;
}