#include <stdio.h>
int main()
{


    printf("Pointers\n");

    int x = 5;
    int *p = &x;
    *p = *p + 3;
    
    printf("(p) Holds address%p:\n",p);
    printf("(&x)Gives the address %p:\n",&x);

    return 0;
}