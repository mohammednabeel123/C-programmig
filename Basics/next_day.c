#include <stdio.h>
#include <time.h>



int main()
{
    while (1){

    
    int day,month,year;
    int leapYear = 0;

    printf("Enter a day: ");
    scanf("%d",&day);

    printf("Enter a month: ");
    scanf("%d",&month);

    printf("Enter a year: ");
    scanf("%d",&year);

    if (month == 2) // its febuary
        if (year  % 4 == 0 && year  % 100 != 0 || year & 400 == 0)
            leapYear = 1;
    day +=1; // day = day + 1

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31)
                break; 
        case 4:
        case 6:
        case 11:
            if(day <= 30)
                break;
        case 2:
            if (day <= 29 && leapYear == 1)
                break;
            else if (day <=28)
                break;
        default:
            day = 1;
            month +=1; // month = month+1
            if (month > 12)
            {
                month = 1;
                year += 1;
            }
    }

    printf("The next Awesome Day is: %d/ %d/ %d\n",  day , month , year);
}
    return 0;
}