#include <stdio.h>

int main() {
    int age;
    float price;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter a price: ");
    scanf(" %f", &price);

    printf("Enter your grade: ");
    scanf("%c", &grade); // notice: no space before %c

    printf("\nYour age: %d", age);
    printf("\nPrice: %.2f", price);
    printf("\nGrade: %c", grade);

    return 0;
}
