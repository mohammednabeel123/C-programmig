#include <stdio.h>

int main()
{
    int num[5][6] = {
    {1,2,3,4,5,6},
    {7,8,9,10,11,12 }
};

num[1][3] = 12; 


for (int i = 0; i < 2; i++){
    int row_sum = 0;

    for (int j = 0; j <6; j++){
        printf("%d ", num[i][j]);
        row_sum += num[i][j];
    }
    printf("\n");
    printf("%d",row_sum);
}

}