#include <stdio.h>

int main()
{
    int number;
    int i = 0;
    int remainder[32];
    printf("------bINARY CONVERTER--------\n");
    printf("Enter a number to convert it to binary: ");
    
    scanf("%d",&number);

    while (number > 0){
        remainder[i] = number % 2;
        number = number /2;
        i++;
    }
    printf("Binary Values: ");
    for (int j = i-1; j >=0; j--){
        printf("%d",remainder[j]);
    }
    return 0;
    
}