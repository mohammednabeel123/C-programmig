#include <stdio.h>

int main()
{
    int year = 2025;
    float pi = 3.14159;
    char grade = 'A';
    char name[20];
    scanf("%19s", name);
    printf("The value of pi is: %f\n",pi);
    printf("The year is %d\n",year);
    printf("Your grade is: %c\n",grade);
    printf("My name is %s\n", name);
    return 0;
}