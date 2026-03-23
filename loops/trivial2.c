#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i=1; i<=num;i++){
        if(i % 3 ==0 || i % 5 ==0){
            sum = sum + i;
            printf("%d\n",i);
        }
    }
      printf("The sum of numbers between 1 to %d divible by 3 and 5 are %d: ",num, sum);
     return 0;
}