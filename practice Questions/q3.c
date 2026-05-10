#include "common.h"

int main()
{
    int i = 1, j = 0, k;
k = (i && j) + (i || j) + !j + i + j;
printf("%d", k);
return 0;
}