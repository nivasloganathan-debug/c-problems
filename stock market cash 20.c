/******************************************************************************
20 Stock Market Crash Detector (While Loop)
Description
A stock index changes daily. A crash is detected if index drops consecutively for 3 days.
Problem Statement
Using a while loop, detect crash day and count total drops.
Input Format
Integer N
 N integers (daily index values)
Output Format
Crash Day
 Total Drops
Test Cases
Input
6
500 480 460 450 470 440

Output
Crash Day: 4
Total Drops: 4

Input
5
300 310 305 295 290

Output
Crash Day: 5
Total Drops: 3

Input
4
200 210 220 215

Output
Crash Day: Not Detected
Total Drops: 1

Explanation (TC1)
Index drops are tracked sequentially.
 Consecutive drops are counted using while loop.
 Crash day is detected at third continuous drop.
 Total drops include all downward movements.
 Real-world financial trend logic is applied.
Explanation (TC3)
Drops are not consecutive enough.
 Crash condition never triggers.
*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    int index[100];
    int i = 1;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
        scanf("%d", &index[j]);
    }
    while(i < N) {
        if(index[i] < index[i - 1]) {
            totalDrops++;
            consecutiveDrops++;

            if(consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1;  // Day count starts from 1
            }
        } else {
            consecutiveDrops = 0;
        }
        i++;
    }
    if(crashDay != -1)
        printf("Crash Day: %d\n", crashDay);
    else
        printf("Crash Day: Not Detected\n");
    printf("Total Drops: %d\n", totalDrops);
    return 0;
}