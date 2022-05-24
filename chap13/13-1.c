#include <stdio.h>
#include <string.h>

struct account{
    char name[12];
    int actnum;
    double balance;
};

int main(void){
    struct account mine = {"hey", 1001, 1231223};
    struct account yours;

    strcpy(yours.name, "hey2");

    yours.actnum = 1002;
    yours.balance = 500000;


    printf("size of struct : %d\n", sizeof(mine));
    printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
    printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

    return 0;
}