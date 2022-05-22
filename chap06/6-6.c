#include <stdio.h>

int main(void){
    int age = 0;

    printf("input your age : ");
    scanf("%d", &age);

    if (age >= 20){
        if (age >= 65){
            printf("you are old\n");
        }
        else{
            printf("you are adult\n");
        }
    }
    else{
        printf("you are not adult\n");
    }

    return 0;
}