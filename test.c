#include <stdio.h>

int main()
{
    float f1 = 2.4, f2 = 9.1;
    float sp;

    printf("f1 = %.1f\n",f1);
    printf("f2 = %.1f\n",f2);
    sp = f1;
    f1 = f2;
    f2 = sp;

    printf("f1 = %.1f\n",f1);
    printf("f2 = %.1f\n",f2);
    
   
    return 0;

}
