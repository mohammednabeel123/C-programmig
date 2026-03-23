#include <stdio.h>
#include <math.h>


int main()
{
    int Bnumber;
    int array_num[32];
    int i = 0;
    int decimal_total = 0;

    printf("Enter a Binary number: ");
    scanf("%d",&Bnumber);

    while (Bnumber > 0)
    {
       array_num[i] = Bnumber % 10;
       Bnumber = Bnumber/10;
       i++;
    }
    for(int j = 0; j < i ; j++){
        decimal_total += array_num[j] * pow(2,j);
    }
    printf("Decimal value: %d\n", decimal_total);
    return 0;
}