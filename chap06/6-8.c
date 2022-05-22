#include <stdio.h>

int main(void){

    int month;

    printf("input month : ");
    scanf("%d", &month);

    switch(month){
        case 4: case 5: case 6:
            printf("%d's month is spring\n", month);
            break;
        
        case 7: case 8: case 9:
            printf("%d's month is summer\n", month);
            break;

        case 10: case 11: case 12:
            printf("%d's month is fall\n", month);
            break;

        case 1: case 2: case 3:
            printf("%d's month is winter\n", month);
            break;
        
        default:
            printf("wrong month");
    }

    return 0;
}