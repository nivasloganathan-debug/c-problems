/******************************************************************************

 Check Leap Year
Input: 2024
Output: Leap year
Explanation: Leap year if divisible by 4 and not by 100, or divisible by 400

*******************************************************************************/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year %4==0&&year %100!=0)||(year %400==0))
    {
        printf("%d is a Leap year", year);
    }
    else
    {
        printf("%d is Not a Leap year", year);
    }
    return 0;
}