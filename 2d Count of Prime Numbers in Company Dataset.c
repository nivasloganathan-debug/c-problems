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
        for(int j = 0; j < c; j++)
        {
            int n = a[i][j];
            int prime = 1;
            if(n <= 1)
                prime = 0;
            for(int k = 2; k <= n/2; k++)
            {
                if(n % k == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if(prime)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}