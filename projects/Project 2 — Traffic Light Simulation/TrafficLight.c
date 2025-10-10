#include <stdio.h>
#include <windows.h>

/*project 2 — Traffic Light Simulation (Logic Only)
🧠 Objective

Simulate a traffic light switching between red, yellow, and green lights automatically or based on user control.
*/

int main(){
char variable;
printf("Do you want to start or Quit the stimulation: ");
scanf(" %c",variable);
while (variable == 's' || variable == 'S') {
        printf("\n🔴 RED Light - STOP\n");
        Sleep(2000); // wait 2 seconds

        printf("\n🟡 YELLOW Light - GET READY\n");
        Sleep(1000); // wait 1 second

        printf("\n🟢 GREEN Light - GO\n");
        Sleep(2000); // wait 2 seconds

        printf("\nCycle complete! Press 's' to repeat or 'q' to quit: ");
        scanf(" %c", &variable);
    }

    printf("\nSimulation ended.\n");
    return 0;     
}