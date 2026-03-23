#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++){
        sum += i;
    }
    printf("%d",sum);
    return 0;
}