#include <stdio.h>


int main()
{
    printf("Nabeel Mohammed\n");
    for (int i=1; i<5; i++){
        printf("%d\n",i);
        if (i > 2){
            printf("%d\n", i);
        }
    }
     int a = 4;
     char b[] = "ball";
     float c = 3.44;
     
printf("Size of int: %zu bytes\n", sizeof(a));
printf("Size of char array: %zu bytes\n", sizeof(b));
printf("Size of float: %zu bytes\n", sizeof(c));
     return 0;
}
