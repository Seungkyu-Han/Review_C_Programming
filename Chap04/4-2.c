#include <stdio.h>

#define MESSAGE "Keep\
going"
#define PI 3.14
#define VOLUME(r) (4 * PI * CUBE(r) / 3)
#define SQUARE(x) ((x) * (x))
#define CUBE(x) (SQUARE(x) * (x))
#define MULTI(x, y) ((x) * (y))

int main(void){
    double radius = 3.0;

    printf("Volume : %.2lf\n", VOLUME(radius));
    printf("Square(4.29) : %.2lf\n", SQUARE(4.29));
    printf("CUBE(3.0) : %.2lf\n", CUBE(3.0));
    printf("Multi(3, 4) : %d\n", MULTI(3, 4));
    puts(MESSAGE);

    return 0;
}