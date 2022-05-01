#include <stdio.h>

int main(void){
    enum DAY {SUN, MON, TUE, WED, THU, FRI, SAT};
    printf("Sunday : %d\n", SUN);
    printf("Wednesday :  %d\n", WED);

    enum SHAPE {POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE};
    printf("LINE : %d, RECT : %d, CIRCLE : %d\n", LINE, RECT, CIRCLE);

    return 0;

}