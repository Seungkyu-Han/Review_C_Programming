#include <stdio.h>

int main(void){
    const double RATE = 0.03;
    int deposit = 800000;

    printf("RATE : %f\n", RATE);
    printf("deposit : %d\n", deposit);
    printf("Interest amount : %f\n", deposit * RATE);

    return 0;
}