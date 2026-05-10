#include "common.h"

int main()
{
    int *ptr, x = 345;
ptr = &x;

printf("%d = %d\n", *ptr, ptr);
    return 0;
}