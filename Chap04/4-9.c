#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main(void){
    int year = 0;
    printf("input year:");
    scanf("%d", &year);
    printf("year : %d\n\n", year);

    int month, day;
    printf("when is your birthday : ");
    scanf("%d-%d-%d", &year, &month, &day);
    printf("birthday : %d - %d - %d\n", year, month, day);

    return 0;
}