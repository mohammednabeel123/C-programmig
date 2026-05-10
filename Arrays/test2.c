#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int target = 30;
    int found = 0;

    for (int i=0 ; i < 4; i++){
        if (arr[i] == target){
            printf("Target found = %d",i);
            found = 1;
            break;
        }
    }

    if (!found){
        printf("Not found\n");
    }


return 0;
}