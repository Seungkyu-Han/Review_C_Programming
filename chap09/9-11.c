#include <stdio.h>

#define SIZE 3

int main(void){
    int *pary[SIZE] = {NULL};

    int a = 10, b = 20, c = 30;

    pary[0] = &a;
    pary[1] = &b;
    pary[2] = &c;

    for (int i = 0; i < SIZE; i++){
        printf("*pary[%d] = %d\n", i, *pary[i]);
    }

    return 0;
}