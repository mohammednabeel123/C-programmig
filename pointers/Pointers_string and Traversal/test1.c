#include <stdio.h>

int main() {


    char name[] = "BEEL"; 

    // *p = name[0];
    // now p = 0x100 thus name[0] thus B

    char *p = name;

    printf("%c\n", *p);

    p++;
    // p here increaes p ++ thus 0x101 now p = name[1] = E


    printf("%c\n", *p);

    return 0;
}