#include <stdio.h>

int main()
{
    // printf("Hello\n");

    // float data;
    // printf("Enter the data of floating point: ");
    // scanf("%f",&data);
    // printf("The integer part = %d\n", (int)data);
    // printf("The decimal part is = %.2f\n", data - (int)data);

    int num;
    int units , tens,hundreds,reversedNum;

    printf("Enter a 3-digit number: ");
    scanf("%d",&num);

    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num  / 100;
    printf("Hundreds: %d\n", hundreds);
    printf("Tens: %d\n", tens);
    printf("Units: %d\n", units);

    reversedNum = units;
    reversedNum = reversedNum *10 + tens;
    reversedNum = reversedNum *10 + hundreds;
    printf("Reversed Number: %d", reversedNum);



    return 0;    
}