#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int prev, curr;
    int isAscending = 1;

    scanf("%d", &prev);

    for (int i = 2; i <= n; i++) {
        scanf("%d", &curr);

        if (curr <= prev) {
            isAscending = 0;
        }

        prev = curr;
    }

    if (isAscending)
        printf("Ascending\n");
    else
        printf("Not Ascending\n");

    return 0;
}