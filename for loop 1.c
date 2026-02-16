/******************************************************************************
Challenge Name
Print Natural Numbers
Description
Print all natural numbers from 1 to N using a for loop.
Problem Statement
Write a program to print numbers from 1 to N.
Input Format
Integer N
Constraints
1 ≤ N ≤ 1000
Output Format
Print numbers from 1 to N (space separated)
Test Cases
Input
5

Output
1 2 3 4 5


*************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("%d",i);
        if(i<N){
            
        }
    }
    return 0;
}
