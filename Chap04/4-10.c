#include <stdio.h>

int main(void){
    int student_num, credit;

    printf("input your Student Number and credit : ");
    scanf("%d%d", &student_num, &credit);

    printf("student_num : %d\ncredit : %d", student_num, credit);

    return 0;
}