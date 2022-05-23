#include <stdio.h>

int add2(int, int);

int main(void){
    int a = 3, b = 5;
    
    int sum = add2(a, b);

    printf("sum : %d\n", sum);

    return 0;
}

int add2(int a, int b){
    int sum = a + b;

    return sum;
}