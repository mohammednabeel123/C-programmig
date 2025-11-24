/* Description:
A small interactive program that asks the user for some personal info and numbers, performs checks, and calculates values.
*/

#include <stdio.h>

int main() {
    int age, number, tries = 0;
    char grade;
    float price;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Age check
    if (age < 10) {
        printf("Too young to play!\n");
        return 0;
    } 

    // Lucky number check with 3 trials
    while (tries < 3) {
        printf("Enter a lucky number: ");
        scanf("%d", &number);

        if (number == 5) {
            printf("Lucky!\n");
            break;
        } else {
            printf("Try again!\n");
        }
        tries++;
    }

    // Grade input
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade); // space before %c important

    if (grade == 'A' || grade == 'a') {
        printf("Excellent!\n");
    } else {
        printf("Keep learning!\n");
    }

    // Price input
    printf("Enter your price: ");
    scanf("%f", &price);

    printf("Your price doubled is %.2f\n", price * 2);

    return 0;
}
  