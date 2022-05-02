#include <stdio.h>

int main(void){
    int a, b, c;
    printf("input number\n");
    scanf("%d %o %x", &a, &b, &c);
    printf("%d %#o %#x\n\n", a, b, c);
    printf("%d %d %d\n", a, b, c);

    return 0;
}