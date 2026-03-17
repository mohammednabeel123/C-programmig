#include <stdio.h>

int add(int first,int second){
        return first + second;
    }

int multiply(int first,int second){
        return first * second;
    }

int subtract(int first,int second){
        return first - second ;
    }
int divide(int first,int second){
    if (second == 0)
        return 0;
    return first / second;
    }


int main() {
    printf("----------------Building Calculator using C programming-----------------\n");

    int first;
    int second;
    char choice;
    while (1){
        printf("Enter your first number\n");
    scanf(" %d",&first);

    printf("Enter your second number\n");
    scanf(" %d",&second);

    char op;
    printf("Enter the op (+,-,*,/):");
    scanf(" %c",&op);

    switch (op){
    case '+' :
        printf("The results of is %d\n",add(first,second));
        break;
    case '-' :
        printf("The results of is %d\n",subtract(first,second));
        break;
    case '*' :
        printf("The results of is %d\n",multiply(first,second));
        break;
    case '/' :
        if (second == 0){
                printf("The second number cant be 0");
        } else {
                printf("The results of is %d\n",divide(first,second));
        }
        break;

    default:
        printf("Invalid operator\n");
        break;

    }
    printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }
    return 0;
}
