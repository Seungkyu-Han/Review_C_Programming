#include <stdio.h>

#define AGE 24
#define PI 3.14
#define END_PRT printf("End\n")

int main(void){
    double radius = 3.0;

    printf("AGE : %d\n", AGE);
    printf("Circle Area : %f\n", radius * radius * PI);
    END_PRT;

    return 0;
}