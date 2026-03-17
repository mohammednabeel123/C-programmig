#include <stdlib.h>
#include <stdio.h>

#include <math.h>

int main()
{
    while (1){
        double num;
    printf("Enter a number: ");


    scanf("%lf",&num);

    double result = fabs(num);

    printf("The absolute value is: %g\n",result);
    printf("The absolute value is: %f\n",result);
    printf("The absolute value is: %e\n",result);
    }

    return 0;
}