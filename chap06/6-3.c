#include <stdio.h>

int main(void){
    int n;

    printf("정수 입력 : ");
    scanf("%d", &n);

    if (n % 3 != 0){
        printf("it is not mult of 3\n");
    }
    else{
        printf("it is mult of 3\n");
    }

    printf("%d %% 3 = %d", n, n % 3);

    return 0;
}