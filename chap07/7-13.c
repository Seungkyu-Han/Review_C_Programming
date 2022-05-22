#include <stdio.h>

int main(void){
    int input;

    while (1){
        printf("input int : ");
        scanf("%d", &input);
        printf("input num : %d\n", input);
        if (input == 0){
            break;
        }
    }
    puts("exit program");

    return 0;
}