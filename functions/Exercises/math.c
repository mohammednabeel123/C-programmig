#include <stdio.h>
#include <math.h>


static int multiply_by_two(int x)
{
    return x * 2;
}

int number(int num)
{
    int result = 0;

    for(int i = 0; i< num; i++){
        result += num;
    }
    result = multiply_by_two(result);
    return result;
}

int power_of_two(int num)
{
    int result = multiply_by_two(num);

    return result;
}
