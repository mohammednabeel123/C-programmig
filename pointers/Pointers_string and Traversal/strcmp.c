#include <stdio.h>

#define MAX_SIZE 50



void clean_newline(char *p)
{
    while(*p != '\0')
    {
        if (*p == '\n'){
            *p = '\0';
            return;
        }
        p++;
    }
}

int my_strcmp(char *p1 , char *p2)
{
    while(*p1 != '\0' && *p2 != '\0'){
        if (*p1 != *p2){
            return 1;
        }
        p1++;
        p2++;
    }
    
    if(*p1 == '\n' && *p2 == '\n'){
            return 0; 
        }

    return 1;
}


int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

   printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    clean_newline(str1);
    clean_newline(str2);


    int result = my_strcmp(str1,str2);
    
    printf("The return value is %d",result);

    return 0;
    
}


