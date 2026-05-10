#include <stdio.h>


float rectangle(float width , float height)
{
    float area;
    area = width * height;
    return area;
}

int main()
{

    int heightrectangle , widthrectangle;
    printf("Enter values for Height: ");
    scanf("%f",&heightrectangle);
    printf("Enter values for  width: ");
    scanf("%f",&widthrectangle);
    float area = rectangle(heightrectangle, widthrectangle);
    printf("The area of the rectangle is: %f\n",area);
    return 0;
}