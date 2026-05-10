#include <stdio.h>
#include "calc.h"
#include "math.h"



int main(void)
{
    int num1, num2;

    printf("Enter values for num1 and num2");
    scanf("%d %d",&num1,&num2);

    int result1 = multiply(num1,num2);
    printf("The multplication of %d and  %d is %d\n", num1,num2, result1);

    int result2 = number(num1);
    printf("The Number of %d is %d\n", num1,result2);

    int result3 = power_of_two(num2);
    printf("The power  of %d is %d\n", num2,result3);


    return 0;
}