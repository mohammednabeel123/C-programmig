#include <stdio.h>
#include <stdlib.h>



void show_main_menu();
void temperature_menu();
void length_menu();
void mass_menu();

int main()
{

    printf("Hello world!\n");
    show_main_menu();
    return 0;

}

void show_main_menu()
{
int choice;
printf("Which conversion do you want?\n 1.Temperature\n 2.Length\n 3.Mass");
scanf("%d", &choice);

switch(choice){
case 1:
    temperature_menu();
    break;
case 2:
    length_menu();
    break;
case 3:
    mass_menu();
    break;
default:
    printf("Wrong input!\n");
}
}




