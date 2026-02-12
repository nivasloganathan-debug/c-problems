/******************************************************************************
If condition questions
1. Check Positive, Negative, or Zero
Input: 5
Output: Positive number
Explanation: If number > 0 → positive, < 0 → negative, else zero
*******************************************************************************/
#include <stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num>0)
  {
    printf("positive number");
  }
  else if(num<0)
  {
    printf("Negative number");
  }
    
  else
  {
    printf("zero");
  }  
    return 0;
}