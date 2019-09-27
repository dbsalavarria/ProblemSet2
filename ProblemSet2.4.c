/*## Problem 2.4
- Create a file named `ProblemSet2.4.c`.
- Write a program that converts BPM (beats-per-minute) to a millisecond interval representation. (*Hint: Get BPS first then take the reciprocal)
- Print the initial BPM value and the converted millisecond interval representation.

60,000 / BPM = one beat in milliseconds
*/

#include <stdio.h>

int main()
{
    int ms = 60000;
    int bpm = 85;
    float result;

    result = ms*1.0/bpm;
    printf("%d BPMs have a %fms time interval\n", bpm, result);
}