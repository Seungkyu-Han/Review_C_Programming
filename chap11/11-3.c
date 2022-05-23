#include <stdio.h>

int main(void){
    char line[101];

    printf("input ctrl + z to exit program");
    while (gets(line)){
        puts(line);
    }

    while (gets(line)){
        puts(line);
    }

    return 0;
}