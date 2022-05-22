#include <stdio.h>
#define TOTAL_BIT 32

int main(void){
    int num = 13;
    printf("%d is ", num);

    for (int i = TOTAL_BIT - 1; i >= 0; i--){
        printf("%d", num >> i & 1);
    }

    printf("\n");

    return 0;
}