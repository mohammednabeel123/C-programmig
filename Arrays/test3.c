#include <stdio.h>


int main()
{   
    int responses[8] = {1,2,2,3,3,3,4,0};
    int frequency[6] = {0};

    

    for (int i = 0 ; i < 7; i++){
        frequency[responses[i]]++;
}

    int max = frequency[0];
    int index = 0;

    for (int i = 1; i < 6; i++) {
        if (frequency[i] > max){
            max = frequency[i];
            index = i;
        }
    }
    printf("Most frequent value = %d\n", index);
    printf("It appeared %d times\n", max);

    return 0;
}