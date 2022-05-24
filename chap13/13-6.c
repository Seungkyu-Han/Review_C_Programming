#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

typedef struct date date;

int main(void){
    typedef struct{
        char title[30];
        char company[30];
        char kinds[30];
        date release;
    }software;

    software vs = { "VSC", "MS", "IDE", {2018, 9, 12}};

    printf("name : %s\n", vs.title);
    printf("company : %s\n", vs.company);
    printf("category : %s\n", vs.kinds);
    printf("release date : %d. %d. %d\n", vs.release.year, vs.release.month, vs.release.day);

    return 0;
}