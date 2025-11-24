#include <stdio.h>

int main () {
    int first,second;
    int result;
    printf("Enter your first number: ");
    scanf("%d",&first);
    printf("Enter your second number: ");
    scanf("%d",&second);
    result = first + second;
    printf("The sum of %d and %d is %d\n",first,second,result);
    return 0;
}