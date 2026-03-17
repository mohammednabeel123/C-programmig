#include <stdio.h>
#include <unistd.h>

int main()
{
    float C, F;
    int choice;

    while (1) {
        printf("\nTEMPERATURE CONVERTER:\n");
        printf("1. Convert from Celsius to Fahrenheit\n");
        printf("2. Convert from Fahrenheit to Celsius\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter your value in Celsius: ");
            scanf("%f", &C);
            sleep(2);
            F = (C * 9 / 5) + 32;
            printf("The value of %.2f°C in Fahrenheit is %.2f°F\n", C, F);
        } 
        else if (choice == 2) {
            printf("Enter your value in Fahrenheit: ");
            scanf("%f", &F);
            sleep(2);
            C = (F - 32) * 5 / 9;
            printf("The value of %.2f°F in Celsius is %.2f°C\n", F, C);
        } 
        else if (choice == 3) {
            printf("Exiting program...\n");
            sleep(1);
            break;
        } 
        else {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
