#include <stdio.h>
#include <stdlib.h>




int isEven(int x){
    if (x % 2 == 0)
        return 1;
    return 0;
}
int isPositive(int x){
    if (x  < 0)
        return 0;
    return 1;
}

int isMultipleOfFive(int x){
    if (x % 5 == 0)
        return 1;
    return 0;
}
int calculateScore(int number){
    int score = 0;
    if (isEven(number)){
        score +=1;
    }
     if (isPositive(number)){
        score +=1;
    }

     if (isMultipleOfFive(number)){
        score +=1;
    }    return score;
}

int classifyScore(int score){
    if (score == 3){
        return 3;
    }else if (score == 2){
        return 2;
    }else if (score == 1){
        return 1;
    } else{
        return 0;
    }

}
int main()
{
   int number;
    int score;
    int category;

    printf("-------- Rule-Based Decision Engine --------\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    score = calculateScore(number);
    category = classifyScore(score);

    printf("\nScore: %d\n", score);

    if (category == 3) {
        printf("Classification: STRONG\n");
    } else if (category == 2) {
        printf("Classification: MEDIUM\n");
    } else if (category == 1) {
        printf("Classification: WEAK\n");
    } else {
        printf("Classification: VERY WEAK\n");
    }
    return 0;
}
