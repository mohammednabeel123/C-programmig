#include <stdio.h>


int sum_even(int n)
{
    if (n <= 0)
        return 0;

    if (n % 2 == 0)
    {
        return n + sum_even(n-2);
    }else{
        return sum_even(n-1);

    }
}



int main()
{   
    int n = 6;
    int result = sum_even(6);
    printf("The sum of even numbers of %d is %d", n, result);
    return 0;

}