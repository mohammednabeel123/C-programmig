#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

     // if  n = 5
    for (int i = 1; i <= n; i++) {
                    // 1 <= 5
       

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            // 1 <= 5-1 // 1 <=4 
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
}