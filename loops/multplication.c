#include <stdio.h>

int main(){

    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    for (int i = 1; i<= 12;i++){
        int multiplier = num * i;
        printf("%d x %d = %d\n", num ,i ,multiplier);
    }
    return 0;
}