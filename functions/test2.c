#include <stdio.h>
#include "test3.h"



static int maximum(int x , int y ,int z);

int main(void)
{
    int result1 = maximum(120,250,2233);
    printf("Maximum  is %d\n", result1);


    int result = square(5);
    printf("The square of 5 %d is", result);
    return 0;
}


static int maximum(int x , int y ,int z)
{
    int max = x;

    if (y > max)
    {
        max = y;

    }
    if(z > max)
    {
         max = z;
    }

        return max;
}



