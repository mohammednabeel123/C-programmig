#include <stdio.h>

int change(int x) {
    x = 50;
    return x;
}

int main() {
    int a = 10;

    change(a);

    printf("a = %d\n", a);
    printf("result = %d\n", a);
}