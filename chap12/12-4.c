#include <stdio.h>

int main(void){
    register int sum = 0;

    int max = 0;
    printf("input positive num : ");
    scanf("%d", &max);

    for (register int count = 1; count <= max; count++){
        sum += count;
    }

    printf("total : %d\n", sum);

    return 0;
}