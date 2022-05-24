#include <stdio.h>

void increment(void);

int main(void){
    for (int count = 0; count < 3; count ++){
        increment();
    }

    return 0;
}

void increment(void){
    static int sindex = 1;
    auto int aindex = 1;

    printf("static var : %2d, \t", sindex++);
    printf("auto var : %2d, \n", aindex++);
}