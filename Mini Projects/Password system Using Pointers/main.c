#include <stdio.h>

#define MAX_PASSWORD 20

char saved_password[MAX_PASSWORD] = "Beel123";

void new_line(char *p)
{
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            return;
        }
        p++;
    }
}

int comparing_password(char *saved_password, char *password)
{
    while (*saved_password != '\0' && *password != '\0') {
        if (*saved_password != *password) {
            return 1;
        }

        saved_password++;
        password++;
    }

    if (*saved_password == '\0' && *password == '\0') {
        return 0;
    }

    return 1;
}



void  my_strcpy(char *saved_password, char *new_password) 
{
    while (*new_password !='\0'){
        *saved_password = *new_password;
        new_password++;
        saved_password++;
    }
    *saved_password = '\0';
    return 1;
}

int main()
{
    char password[MAX_PASSWORD];

    char newPassword[MAX_PASSWORD];

    printf("Enter your current password:\n");
    fgets(password, MAX_PASSWORD, stdin);

    new_line(password);

    if (comparing_password(saved_password, password) == 0) {
        printf("Access granted\n");

        printf("Enter your new password:\n ");
        fgets(newPassword,MAX_PASSWORD,stdin);
        new_line(newPassword);

        my_strcpy(saved_password , newPassword);
        printf("Now your password has been changed to %s\n",saved_password);

    } else {
        printf("Wrong password\n");
    }

    return 0;
}