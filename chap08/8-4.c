#include <stdio.h>

int main(void){
    int data = 100;
    char ch = 'A';
    int *ptrint = &data;
    char *ptrchar = &ch;
    printf("print value : %d %c\n", *ptrint, *ptrchar);

    *ptrint = 200;
    *ptrchar = 'B';

    return 0;
}