#include <stdio.h>

int main(void){
    short short_var = 30000;
    int int_var = -2100000000;

    unsigned short int unsigned_short_var = 60000;

    unsigned int unsigned_int_var = 420000000;

    printf("value : %d %d\n", short_var, int_var);
    printf("value : %d %d", unsigned_short_var, unsigned_int_var);

    return 0;
}