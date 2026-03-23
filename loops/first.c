#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");

    scanf("%d",&number);

    while (number > 0)
    {
        printf("*");
        number--;
    }

    return 0;
}