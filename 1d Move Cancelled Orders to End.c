#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int position=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[position]=arr[i];
            position++;
        }
    }
    while(position<n)
    {
        arr[position]=0;
        position++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}