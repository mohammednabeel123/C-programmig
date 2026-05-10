#include <stdio.h>

int main()
{
    char a[] = "abc";
    char b[] = "afc";

    int i = 0;
    int equal = 1;   // assume equal

    while (a[i] != '\0' || b[i] != '\0'){
        if (a[i] != b[i]){
            equal = 0;
            break;
        }
        i++;
    }

    if (equal){
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}