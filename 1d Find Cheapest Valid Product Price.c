#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int min=0;
    int found=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            if(found==0)
            {
                min=arr[i];
                found=1;
            }
            else if(arr[i]<min)
            {
                min=arr[i];
            }
        }
    }

    if(found==1)
        printf("%d",min);
    else
        printf("No positive");

    return 0;
}