#include <stdio.h>

int main(void){

    double gpa;

    printf("input avg of grade : ");

    scanf("%lf", &gpa);

    if (gpa >= 4.3){
        printf("best student\n");
    }
    else if (gpa >= 3.8){
        printf("very good student\n");
    }
    else if (gpa >= 3.0){
        printf("good student\n");
    }
    else{
        printf("bad student\n");
    }

    return 0;
}