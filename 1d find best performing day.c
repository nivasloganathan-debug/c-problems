#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n<=0)
        return 0;
    int leaders[n];
    int count=0;
    int max=arr[n-1];
    leaders[count++]=max;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            leaders[count++]=max;
        }
    }
    for(int i=count-1;i>=0;i--)
    {
        printf("%d ",leaders[i]);
    }
    return 0;
}