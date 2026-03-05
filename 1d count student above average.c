#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int sum=0;
    float avg;
    int count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    avg=(float)sum/n;

    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}