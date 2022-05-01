#include <stdio.h>
#include <limits.h>

int main(void){
    printf("char's range : %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char's range : %d ~ %d\n", 0, UCHAR_MAX);

    printf("unsigned short's range : %d ~ %d\n", 0, USHRT_MAX);
    printf("int's range : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("unsigned int's range : %d ~ %d\n", 0, UINT_MAX);

    printf("long long int's range : %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int's range : %d ~ %llu\n", 0, ULLONG_MAX);

    return 0;
}