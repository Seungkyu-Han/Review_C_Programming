#include <stdio.h>
#include <string.h>

int main(void){

    char src[50] = "https://www.visualstudio.com";
    char dst[50];

    printf("char Array = %s\n", src);
    printf("size of String strlen(src) = %d\n", strlen(src));
    memcpy(dst, src, strlen(src) + 1);
    printf("char Array dst = %s\n", dst);
    memcpy(src, "hello", strlen("hello") + 1);
    printf("char Array src = %s\n", src);

    char ch = ':';
    char *ret;
    ret = memchr(dst, ch, strlen(dst));
    printf("hidden str : %s", ch, ret);

    return 0;
}