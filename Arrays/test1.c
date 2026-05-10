#include <stdio.h>

int main()
{
    int arr[5];

    // Step 1: Take input
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    // Step 2: Assume first element is largest
    int largest = arr[0];

    // Step 3: Find largest
    for (int i = 1; i < 5; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    // Step 4: Print result
    printf("Largest = %d\n", largest);

    return 0;
}