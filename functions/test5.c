#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    srand(time(NULL));   // seed once
    
    for( int i = 1; i <= 20; i++) {
        int raw = rand();
        int remainder = raw % 6;
        int face = 2 + remainder;

        // printf("i=%d raw=%d remainder=%d face=%d\n", i, raw, remainder, face);

         
        printf("%10d", 1 +(rand() % 6));

        if(i % 5 == 0){
            printf("\n");
        }
    }
    return 0;
}