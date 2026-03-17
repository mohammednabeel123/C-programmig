#include <stdio.h>
#include <stdlib.h>


int isEven(int x){
    if (x % 2 == 0)
        return 1;
    return 0;
}
int isPositive(int x){
    if (x  < 0)
        return 0;
    return 1;
}

int isMultipleOfFive(int x){
    if (x % 5 == 0)
        return 1;
    return 0;
}

int main()
{
    int number;
    int select;

    printf("--------Number Property Analyzer-------\n");
    printf("Enter a number\n");
    scanf(" %d",&number);

    int resultEven = isEven(number);
    int resultPositive = isPositive(number);
    int resultMultiply = isMultipleOfFive(number);

    printf("what do you want to check?\n1)Is the number Even?\n2)Is the number Positve?\n3)Is the number a multiply of 5?\n");
     int choice;
     scanf(" %d",&choice);
     switch (choice){
         case 1 :
             if (resultEven == 1){
                    printf("Yes the number is an Even Number");

                    }else{
                        printf("No the number is not an Even Number");
                    }break;
                case 2:
                    if (resultPositive ==1){
                        printf("Yes its a positive number");
                    } else{
                        printf("No its not a postive number");
                    } break;
                case 3:
                    if (resultMultiply == 1){
                        printf("Yes its a multiply of 5");
                    } else{
                        printf("No its not a multiply of 5");
                    }break;
                default:
                    printf("Invalid choice selected");
                    break;
                }

    return 0;
}
