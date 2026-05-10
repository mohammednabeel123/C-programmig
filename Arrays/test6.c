#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int array_of(int n)
{
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){
        printf("%d",arr[i]);
    }
}

int main()
{
    int result = array_of(4);
    printf("%d",result);
    return 0;
}