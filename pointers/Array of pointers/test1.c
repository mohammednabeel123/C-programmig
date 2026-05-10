//Array of pointers

#include <stdio.h>


int main()
{
    printf("Array  of pointers\n");


    int arr[3] = {5,10,15};
    

    for (int i = 0; i <3; i++){
        //printf("%5d",arr[i]);

    }

    int *p = arr;
    int *y = NULL; // keeps the address of y safe  for future usage

    for (int i = 0; i <3; i++){
        //5printf("%p\n", *(p+i)); 
        printf("%d\n",*(p+i)+1);
    }
    printf("This is the value at the array of index 0 is now : %d\n", *p + 10);

    // Now we can say this: 
    y = p; //aliasing (two pointers to same data)

    *y = *p + 10;

    printf("This is the value of Y now: %d", *y);


    return 0;
}