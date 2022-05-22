#include <stdio.h>

int main(void){
    const int MAX = 15;

    for (int i = 1; i <= MAX; i++){
        if (i % 3 == 0){
            continue;
        }
        printf("%3d", i);
    }

    puts("");

    return 0;
}