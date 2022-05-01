#include <stdio.h>

int main(void){
    int korean = 99; //변수를 선언과 동시에 초기화, 지역변수는 반드시 초기화를 해주어야 한다
    int math = 100;
    int science = 90;

    int total = korean + math + science;

    printf("Korean : %d\n", korean);
    printf("math : %d\n", math);
    printf("science : %d\n", science);
    printf("total : %d\n", total);

    return 0;
}