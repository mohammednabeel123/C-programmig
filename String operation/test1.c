#include <string.h>
#include <stdio.h>


int main()
{
    char str[] = "Nabeel";
     

    //  while (str[len] != '\0'){
    //     len++;
    //  }
    //  printf("%d\n",len);


    char src[] = "Hello";
    char dest[20];
    int i = 0;

   while (src[i] != '\0'){
    dest[i] = src[i];
    i++;

   }
   dest[i] = '\0';
    printf("%s\n",dest);

    return 0;

}