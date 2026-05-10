#include <stdio.h>

#define MAX_SIZE  50


int  new_line(char *n)
{
    while (*n != '\0'){
        if(*n == '\n'){
            *n = '\0';
            return 1;
        }
         n++;
    }
   
}
int  my_strcpy(char *dest, char *src)
{
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return 1;
}

int main()
{

    char des1[MAX_SIZE];
    char src2[MAX_SIZE];

    printf("Enter the Destinatio: \n");
    fgets(des1,MAX_SIZE,stdin);

    printf("Enter the Source: \n");
    fgets(src2,MAX_SIZE,stdin);


    
    new_line(des1);
    new_line(src2);

    int result = my_strcpy(des1,src2);

    printf("The value is %d\n",result);
    printf("Copied value is %s\n", des1);
    return 0;
}