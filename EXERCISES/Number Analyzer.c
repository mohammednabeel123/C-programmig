/*
    Exercise 1: Number Analyzer
Write a program that:

Takes 10 integers as input

Finds and prints the largest number

Finds and prints the smallest number

Calculates and prints the average
*/

#include <stdio.h>

int main()
{
    printf("This is a number Analyzer\n");

    int integers[3];
    int sum = 0; 
    int count = 0;
    int largest, smallest;
    float average = 0; 
   
    printf("Enter 3 Integers as an input\n");

    for (int i = 0; i <3; i++){
        printf("Enter integers %d: ", i+1);
        scanf("%d",&integers[i]);
    }

    // initializing the largest and smallest to the first element. so we make the first element both the small and largest AND also summing them up 

    largest = smallest = integers[0];

   
    for (int i = 0; i<3; i++){
        sum += integers[i];

        if (integers[i] > largest){
            largest = integers[i];
        } else if (integers[i] < smallest){
            smallest = integers[i];
        }
    }

    average = (float)sum / 3;
   
   

    for (int i=0; i<3; i++){
        printf("%d ",integers[i]);
    }

    printf("\nSum: %d", sum);
    printf("\nAverage: %.2f", average);
    printf("\nLargest number: %d", largest);
    printf("\nSmallest number: %d", smallest);
    printf("\nCount of non-zero numbers: %d\n", count);

   return 0;
}