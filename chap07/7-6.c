#include <stdio.h>

int main(void){
    int input;

    do{
        printf("Input int or 0 : ");
        scanf("%d", &input);
    } while (input != 0);

    puts("exit program");

    return 0;
}