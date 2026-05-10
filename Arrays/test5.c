#include <stdio.h>


int main()
{
    int arr[8] = {3,1,2,3,4,2,3,1};
    int frequency[6] = {0};
    for (int i= 0; i < 8;i++){
        frequency[arr[i]]++;   
    }
    int max = frequency[1];
    int index = 1;
      for (int i = 2; i < 6; i++){
        if (frequency[i] > max){
            max = frequency[i];
            index = i;
        }
    }
     for (int i = 1; i < 6; i++){
        printf("%d -> %d\n", i, frequency[i]);
    }
    printf("Most frequent value = %d\n", index);
    printf("Count = %d\n", max);
    return 0;
}