#include <stdio.h>

int main(void){
    int type, point;

    printf("choose num, 1 or 2 : ");
    scanf("%d", &type);
    printf("input score : ");
    scanf("%d", &point);

    if (type == 1){
        if (point >= 70){
            printf("pass test type 1\n");
        }
        else{
            printf("not pass test type 1\n");
        }
    }
    else if (type == 2){
        if (point >= 60){
            printf("pass test type 2\n");
        }
        else{
            printf("not pass test type 2\n");
        }
    }

    return 0;
}