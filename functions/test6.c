#include <stdio.h>

void static_test()
{
    static int x = 5;
    x++;
    printf("%d\n", x);
}

void test()
{
    int x = 5;
    x++;
    printf("%d\n", x);
}

int main()
{
    while(1){
        static_test();
    }

    while(1){
        test();
    }
}