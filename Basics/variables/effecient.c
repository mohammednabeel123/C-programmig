#include <stdio.h>
#include <math.h>

int main()
{
   int x;
   int x1,x2,x3,x4;

   printf("Enter X: ");
   scanf("%d",&x);

   x1 = pow(x,2);
   x2 = pow(x,4);
   x3 = pow(x,6);
   x4 = pow(x,9);

    printf("The value of X^2 is %d\n",x1);
    printf("The value of X^4 is %d\n",x2);
    printf("The value of X^6 is %d\n",x3);
    printf("The value of X^9 is %d\n",x4);

return 0;
}