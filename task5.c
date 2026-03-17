#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int num;
    printf("Enter some digits: ");

    scanf("%d",&num);

    if (num >= 10 && num <= 99) {
        printf("This number is a double - digit number");
    }
    else if (num >=100 && num <= 999){
        printf("This number is a triple digit number");
    }
    else{
        printf("This number is outside the double/triple digit range\n");
    }
    return 0;
}