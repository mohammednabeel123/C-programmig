#include <stdio.h>

/* ---------- QUESTION 1 FUNCTION ---------- */

void classifyNumber(int n)
{
    if (n % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");

    if (n <= 1)
    {
        printf("The number is NOT prime\n");
        return;
    }

    int isPrime = 1;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("The number is Prime\n");
    else
        printf("The number is NOT Prime\n");
}


/* ---------- QUESTION 2 FUNCTIONS ---------- */

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}


/* ---------- QUESTION 3 FUNCTION ---------- */

void analyzeDigits(int n)
{
    int digits = 0;
    int sum = 0;
    int original = n;
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;

        digits++;
        sum += digit;

        reversed = reversed * 10 + digit;

        n = n / 10;
    }

    printf("Number of digits: %d\n", digits);
    printf("Sum of digits: %d\n", sum);

    if (original == reversed)
        printf("The number is a palindrome\n");
    else
        printf("The number is NOT a palindrome\n");
}


/* ---------- MAIN PROGRAM ---------- */

int main()
{
    int number;
    int choice;
    float num1, num2;

    /* QUESTION 1 */

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    classifyNumber(number);


    /* QUESTION 2 */

    printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Select an option: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    switch (choice)
    {
        case 1:
            printf("Result: %.2f\n", add(num1, num2));
            break;

        case 2:
            printf("Result: %.2f\n", subtract(num1, num2));
            break;

        case 3:
            printf("Result: %.2f\n", multiply(num1, num2));
            break;

        case 4:
            printf("Result: %.2f\n", divide(num1, num2));
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid option\n");
    }


    /* QUESTION 3 */

    printf("\nEnter an integer for digit analysis: ");
    scanf("%d", &number);

    analyzeDigits(number);

    return 0;
}