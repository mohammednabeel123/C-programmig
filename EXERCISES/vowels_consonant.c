#include <stdio.h>

int main()
{
char letter;
printf("Enter a letter: ");
scanf("%c",&letter);

switch (letter)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'I':
case 'O':
case 'U':
case 'E':
    printf("%c is a vowel",letter);
    break;
default:
    printf("%c is a consonant",letter);
}
return 0;    
}