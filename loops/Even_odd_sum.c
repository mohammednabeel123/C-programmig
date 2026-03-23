#include <stdio.h>

int main()
{
    int num;
    int even = 0;
    int odd = 0;
    printf("Enter more than 2 digit number: ");
    scanf("%d",&num);
    while (num > 0){
        int digit = num % 10;
        if(digit % 2 == 0){
            even = even + digit;
        } else{
            odd = odd + digit;
        }
        num = num / 10;
    }

    printf("Sum of even digits = %d\n", even);
    printf("Sum of odd digits = %d\n", odd);

    printf("The difference between %d - %d = %d",even , odd, even - odd);
    return 0;
}