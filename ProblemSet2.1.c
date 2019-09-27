#include <stdio.h>

int main()
{
    char c = 'c';
    int isDigit = (c >= '0' && c <= '9') ? 1 : 0;
    int isLower = (c >= 'a' && c <= 'z') ? 1 : 0;
    int isUpper = (c >= 'A' && c <= 'Z') ? 1 : 0;

    printf("Is it a digit? %d\n", isDigit);
    printf("Is is a lower? %d\n", isLower);
    printf("Is it an upper? %d\n", isUpper);
}
