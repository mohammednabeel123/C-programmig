#include <stdio.h>
#include <math.h>

int main()
{
    while(1){
          int sec, hours,minutes, remaining_sec;
    printf("Enter an integer representing seconds: ");
    scanf("%d",&sec);

    hours = sec / 3600;

    minutes = (sec % 3600) / 60;

    remaining_sec = sec % 60;

    printf("%d seconds is %d hours, %d minutes, and %d seconds.\n",sec,hours,minutes,remaining_sec);
    return 0;
    }
}