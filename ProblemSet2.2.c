#include <stdio.h>
#include <math.h>

int main()
{
    int midi = 69;
    double frequency = pow(2, (midi - 69) / 12.0) * 440;

    printf("Frequency = %lf for MIDI note %d \n", frequency, midi);
}