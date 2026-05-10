#include <stdio.h>

#define SIZE 3
int main()
{

    double arr[SIZE];
    printf("Element Adress = %lu\n",&arr[0]);
    printf("Element Adress = %lu\n",&arr[1]);


    char name[20];
    

    printf("Enter name: ");
    fgets(name, 20, stdin);

    printf("You entered: %s", name);


    return 0;
}