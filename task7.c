#include <stdio.h>

int main()
{
    while (1){
        int x,y;

    printf("Enter numbers for X: ");
    scanf("%d",&x);

    printf("Enter numbers for Y: ");

    scanf("%d",&y);

    if (x > 0 && y >0){
        printf("The values %d and %d belongs Quadrant I (Top Right)\n",x,y);
    }
    else if (x < 0 && y> 0){
        printf("The values %d and %d belongs Quadrant II (Top Left)\n",x,y);
    } else if(x <0 && y<0){
        printf("The values %d and %d belongs Quadrant III (Bottom Left)\n",x,y);
    }else if (x > 0 && y < 0){
        printf("The values %d and %d belongs Quadrant IV (Bottom Right)\n",x,y);
    } else{
        printf("The values %d and %d does not belng to any Qaudrant (on an axis)\n",x,y);
    }

    }
    
    return 0;
}