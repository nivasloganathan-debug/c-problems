/*
3 Electricity Usage Monitor
Description
An electricity board tracks daily electricity consumption to calculate monthly usage.
Problem Statement
Calculate the total electricity units consumed over N days.
Input Format
Integer N
 N integers (units used per day)
Output Format
Total Units
Test Cases
Input
4
5 6 7 8

Output
Total Units: 26

Input
3
10 10 10

Output
Total Units: 30

Input
1
12

Output
Total Units: 12

Explanation (TC1)
The for loop iterates through each day and adds daily usage.
 Final total is printed after the loop.
Explanation (TC3)
Only one day is provided, so the output equals that value.
________________________________________

*/
#include <stdio.h>
int main() {
   int num_days,no_units,t_units=0;
   scanf("%d",&num_days);
   for (int i=1;i<=num_days;i++){
       scanf("%d",&no_units);
       t_units+=no_units;
   }
   printf("Total units : %d",t_units);
    return 0;
}