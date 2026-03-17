#include <stdio.h>
#include <ctype.h>

// pasrsing emails
int main()
{
    char email[100];
    char username[50];
    char domain[50];
    int a;

    printf("Enter an email: ");

   fgets(email ,sizeof(email), stdin);

   sscanf(email , "%[^@]@%s",username,domain);

   printf("Username : %s\n",username);
   printf("Domain : %s\n",domain);

   printf("Numbers in email: ");

   for(int i= 0; username[i] != '\0'; i++)
   {
    if(isdigit(username[i]))
    printf("%c", username[i]);
   }

   printf("\n");

   // we can also use these:
   /*sscanf(email, "%[a-zA-Z]%[0-9]@%s", name, numbers, domain);

    printf("Name: %s\n", name);
    printf("Numbers: %s\n", numbers);
    printf("Domain: %s\n", domain);

    */

    return 0;
}