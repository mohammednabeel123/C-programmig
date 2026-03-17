#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello\n");

    int x1,y1,x2,y2;
    float formula;
    printf("Enter the number of X1: ");
    scanf("%d",&x1);

    printf("Enter the number of y1: ");
    scanf("%d",&y1);

    printf("Enter the number of X2: ");
    scanf("%d",&x2);

    printf("Enter the number of y2: ");
    scanf("%d",&y2);

    formula = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    printf("The distance between two points are: %.2f",formula);
    return 0;
}