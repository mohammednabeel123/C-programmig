#include <stdio.h>


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i=1; i<=num;i++){
        printf("%d,",i);
    }
    for (int j = num; j >=1; j--){
            printf("%d",j);
        }

        return 0;
}