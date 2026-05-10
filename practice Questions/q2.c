#include "common.h"

char *f (int p, char *s) { 
    s[p + 1] = '\0'; 
    return s + 1; 
}

int main(void) { 
    char s[] = "ABCDEF";
    char *i = f (1, s + 2);
    printf ("%s\n", i); 
    return 0; 
}