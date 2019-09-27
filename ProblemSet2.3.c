/* ## Problem 2.3
- Create a file named `ProblemSet2.3.c`.
- Write a program that swaps a value between two integer variables.
- Print the initial values and values after swapping. */

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    int c = a;
    a = b;
    b = c;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

}