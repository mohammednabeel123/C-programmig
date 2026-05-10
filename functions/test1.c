#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int result = square(5);
    printf("%d\n", result);
}