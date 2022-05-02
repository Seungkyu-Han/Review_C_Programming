#include <stdio.h>

int main(void){
    printf("   123456789\n");

    printf("1 %8d\n", 7629);
    printf("2 %-8d\n", 7629);
    printf("3 %10.3f\n", 32.369);
    printf("4 %10f\n", 32.369);
    printf("5 %5f\n", 32.369);
    printf("6 %-10.3f\n", 32.369);
    printf("7 %+10.3f\n", 32.369);
    printf("8 %-+10.3f\n", 32.369);

    return 0;
}