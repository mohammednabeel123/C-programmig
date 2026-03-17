#include <stdio.h>
#include <stdlib.h>

int main()
{
double height, width;
printf("Enter the height of the rectangle: ");
scanf("%lf", &height);
printf("Enter the width of the rectangle: ");
scanf("%lf", &width);

double perimeter = height * width;
printf("The perimeter of the rectangle is: %.2lf\n", perimeter);

return 0;
}