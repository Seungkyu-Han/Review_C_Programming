#include <stdio.h>
#define MAX 5

int main(void){
    int i;

    for (i = 1; i <= MAX; i++){
        printf("C is good %d\n", i++);
    }

    printf("i = %d", i);

    return 0;
}