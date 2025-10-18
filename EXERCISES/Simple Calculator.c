/*Exercise 2: Simple Calculator
Write a program that:

Takes two numbers and an operator (+, -, *, /)

Performs the calculation

Handles division by zero error

Prints the result
*/

#include <stdio.h>

int main()
{
    int first_number;
    int second_number;
    int op;
    float result;
    printf("Enter your first number: ");
    scanf("%d",&first_number);

    printf("Enter your second number: ");
    scanf("%d",&second_number);

    printf("Select the number of the  sign:\n1.'*' \n2.'-' \n3.'+' \n4.'/' \n");
    scanf(" %d",&op);

    if (op == 1){
        result = first_number * second_number;
        printf("%d * %d =  %.2f\n",first_number,second_number,result);
    } else if (op == 2){
         result = first_number - second_number;
        printf("%d - %d =  %.2f\n",first_number,second_number,result);
    } else if (op == 3){
         result = first_number + second_number;
        printf("%d - %d =  %.2f\n",first_number,second_number,result);
    } else if (op == 4) {
    if (second_number == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = (float)first_number / second_number;
        printf("%d / %d = %.2f\n", first_number, second_number, result);
    }
}


return 0;  
}