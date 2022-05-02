#include <stdio.h>

int main(void){
    float pi;
    printf("input value for the pie :");
    scanf("%f", &pi);
    char ch1, ch2;
    scanf(" %c %c", &ch1, &ch2);
    printf("ch1 = %c ch2 = %c\n", ch1, ch2);

    return 0;
}