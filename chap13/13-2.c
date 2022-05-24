#include <stdio.h>
#include <string.h>

struct date{
    int year;
    int month;
    int day;
};

struct account{
    struct date open;
    char name[12];
    int actnum;
    double balance;
};

int main(void){
    struct account me = {{2018, 3, 9}, "hey", 1312, 13123123};

    printf("size of struct : %d\n", sizeof(me));
    printf("[%d %d %d]\n", me.open.year, me.open.month, me.open.day);
    printf("%s %d %2.f\n", me.name, me.actnum, me.balance);

    return 0;
}