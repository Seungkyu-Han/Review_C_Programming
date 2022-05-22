#include <stdio.h>

int main(void){
    int a[] = {8, 2, 8, 1, 3};
    int *p = a;

    printf("%2d, %2d\n", *(p + 1), *(p + 4));

    return 0;
}