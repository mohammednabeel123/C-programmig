#include <stdio.h>
int main()
{
char operator;
int num1,num2;
printf("Enter an operation sign: ");
scanf("%c",&operator);
printf("Enter two integers:\n ");
scanf("%d %d", &num1,&num2);


switch (operator)
{
case '+':
    printf("%d + %d = %d\n", num1,num2 ,num1 + num2);
    break;
case '-':
    printf("%d - %d = %d\n", num1,num2 ,num1 - num2);
    break;
case '*':
    printf("%d * %d = %d\n", num1,num2 ,num1 * num2);
    break;
case '/':
    if (num2 != 0){
       printf("%d / %d = %d\n", num1,num2 ,num1 / num2); 
    }
    break;

default:
    printf("INVALID OPERATOR");
}












return 0;    
}