#include <stdio.h>
#include <string.h>
// This is a simple C program that demonstrates the use of the printf function to display messages and variables on the console.
int main() {
    //casting
    int a = 5.0;
    double b = 2;
    double res;
    res = a / b; // This will perform floating-point division and result in 2.5
    printf("The result of a / b is: %.2lf\n", res); // This will print the result with 2 decimal places


    int num1 = 10, num2 = 20;



    double result = num1 / num2; // This will perform floating-point division and result in 0.5
    printf("The result of num1 / num2 is: %.2lf\n", result); // This will print the result with 2 decimal places

    putchar('A');
    putchar('\n');

    char c;
    c = getchar(); // This will read a single character from the user input
    printf("You entered: %c\n", c); // This will print the character entered

    char name[] = "Nabeel";
    int length = strlen(name); // This will calculate the length of the string "Nabeel"
    printf("The length of the name is: %d\n", length); // This will


return 0;
}