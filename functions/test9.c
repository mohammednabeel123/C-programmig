#include <stdio.h>

int sum(int n)
{
    if (n <=0){
        return 0;
    } else{

        return n + sum(n - 1);
    }
}

int factorial(int n)
{
    if (n <= 1){
        return 1;
    } else{
        
        return n * factorial(n-1);
    }
}

int power(int x , int n)
{
    if (n == 0){
        return 1;
    } else{
        return x * power(x, n-1);
    }
}


int count_digits(int n)
{
    if (n ==0){
        return 0;
    } else{
        return 2 + (count_digits(n/10));
    }
}

int main()
{
    int n = 4;
    int x = 2;
    int result;
    result = sum(n);
    printf("The sum of  %d is %d\n", n, result);

    int result1 = factorial(n);
    printf("The factorial of %d is %d\n", n, result1);

    int result2 = power(x,n);
     printf("The power of %d and %d is %d\n", x,n,result2);

     int result3 = count_digits(123);
     printf("The count  of  %d is %d\n",n,result3);

    return 0;
}