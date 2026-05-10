#include <stdio.h>


int main()
{
    printf("Hi\n");

    int t[4][4];
    printf("%d\n", sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
    // size0f(t) == size of the entire array meaning int = 4 bytes so 16 ints x 4 byes = 64 bytes
     // sizeof(t[0]) == size of the first row so int = 4 and t[4] = 4 so 4 x4 = 16
    // sizeof(t[0][0]) == size of the one integer 4 x 4 x 4 = 16 bytes

    return 0;
}