#include <stdio.h>

extern int factorial(int n)
{
    if (n <= 1)   // base case
        return 1;

    return n * factorial(n - 1);  // recursive call
}

int main()
{
    printf("%d\n", factorial(5));
    return 0;
}