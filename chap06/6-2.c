#include <stdio.h>

int main(void){
    int n;

    printf("input int: ");
    scanf("%d", &n);

    if (n % 2 == 1){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }

    (n % 2) ? printf("odd\n") : printf("even\n");

    return 0;
}