#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];          
    int total=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int leftSum=0;
    int found=-1;

    for(i=0;i<n;i++)
    {
        int rightSum=total-leftSum-arr[i];
        if(leftSum==rightSum)
        {
            found=i;
            break;
        }
        leftSum+=arr[i];
    }
    printf("%d",found);
    return 0;
}