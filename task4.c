#include <stdio.h>

int main()
{

char c;
int num;
char letter;
printf("Enter a number: ");
scanf("%d", &num);
c = getchar();   // consume the newline

printf("Enter a letter: ");
letter = getchar();

putchar(c);
putchar(letter);
}