#include <stdio.h>

int main(void){
    int input;

    printf("input int : ");
    scanf("%d", &input);
    printf("input num : %d\n", input);
    printf("address : %u, %p\n", (int)&input, &input);

    printf("size of address : %d\n", sizeof(&input));

    return 0;

}