#include <stdio.h>


int main()
{
    int num , power;
    int result = 1;

    printf("Enter num: ");
    scanf("%d",&num);

      printf("Enter power: ");
    scanf("%d",&power);

    for (int i =1; i <= power; i++){
        result = result*num;
    }
       printf("%d in the POWER of %d = %d\n", num,power, result);
    return 0;

}