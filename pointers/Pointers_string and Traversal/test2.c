#include <stdio.h>

int my_strlen(char *p)
{
    int count = 0;

    while (*p != '\0'){
        count ++;
        p++;
    }
    return count;
}


int main()
{
    char name[] = "Medipo";

    int result = my_strlen(name);

    printf("Count = %d\n",result);

    return 0;
}