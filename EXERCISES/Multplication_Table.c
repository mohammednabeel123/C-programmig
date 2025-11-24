/*
Exercise 2: Multiplication Table
Create a program that:

Asks user for a number (1-10)

Prints the multiplication table for that number

Formats it nicely (e.g., "5 x 3 = 15")
*/

#include <stdio.h>
 int main()
 {
    int number;
    int result ;
    printf("Enter a number from 0-100: ");
    scanf("%d",&number);

    if (number > 100){
      printf("The number cant be above 100!\n");
      return 0;
    }
    
    for (int i=1 ; i <11; i++){
      result = i * number;
      printf("%d * %d  = %d \n",i,number,result);
    }

    
  return 0;  
 }