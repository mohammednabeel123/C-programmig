#include <stdio.h>

/*Even or Odd number checker*/
int main()
{
int number;
printf("Enter an integer: ");
scanf("%d",&number);
if (number % 2==0){
    printf("its an even Number");
    return 1;
} else{
    printf("Its not an even number");
    return 0;
}




 return 0;   
}