#include <stdio.h>


int main()
{
    printf("hi");
    printf("Arithmetic Sequence\n");

    int d,a1,n,An;

    while (1)
    {
        printf("Enter values for your arithemtic Sequence\n");
        printf("Enter a value for d: ");
        scanf("%d",&d);

        printf("Enter a value for a1: ");
        scanf("%d",&a1);

        printf("Enter a value for n: ");
        scanf("%d",&n);
        getchar();


        
        An = a1 + (n - 1) * d;
        printf("The %dth term is: %d\n", n, An);
        
    }
    return 0;
}