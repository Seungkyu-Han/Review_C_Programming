#include <stdio.h>

int add2(int, int);
int findMax2(int, int);
void printMin(int, int);

int main(void){
    int a = 3, b = 5;

    int max = findMax2(a, b);
    printf("max : %d\n", max);
    printf("sum : %d\n", add2(a, b));

    printMin(2, 5);

    return 0;
}

int add2(int a, int b){
    int sum = a + b;

    return sum;
}

int findMax2(int a, int b){
    int max = a > b ? a : b;
    return max;
}

void printMin(int a, int b){
    int min = a < b ? a : b;
    printf("min : %d\n", min);

    return;
}