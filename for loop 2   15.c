/******************************************************************************

Smart Meter Voltage Fluctuation
Description
A smart meter logs voltage readings.
Problem Statement
Find minimum voltage and count low-voltage events (<210V).
Input Format
Integer N
 N integers (voltage readings)
Output Format
Minimum Voltage
 Low Voltage Events
Test Cases
Input
5
220 205 215 200 230

Output
Minimum Voltage: 200
Low Voltage Events: 2

Input
3
220 225 230

Output
Minimum Voltage: 220
Low Voltage Events: 0

Input
4
190 200 205 195

Output
Minimum Voltage: 190
Low Voltage Events: 4

Explanation (TC1)
Minimum value is tracked while counting low voltage.
Explanation (TC3)
All readings are below safe voltage

*******************************************************************************/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int voltage;
    int minVoltage;
    int lowVoltageCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &voltage);
        if(i == 0) {
            minVoltage = voltage;
        }

        if(voltage < minVoltage) {
            minVoltage = voltage;  
        }

        if(voltage < 210) {
            lowVoltageCount++; 
        }
    }
    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d\n", lowVoltageCount);
    return 0;
}