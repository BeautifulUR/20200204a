#include<stdio.h>
int main(int argc,char const *argv[])
{
    struct date{
       int year;
       int month;
       int day;
    };

    struct date today;
    struct date day;
    struct date *Date=&today;
    today=(struct date){1997,11,3};
    day=today;
    /*today.year=1997;
    today.month=11;
    today.day=3;*/
    //struct date today={1997,11,3};
    //struct date today={.month=11,.day=3};
    printf("Today is %i-%i-%i\n",today.year,today.month,today.day);
    printf("Day is %i-%i-%i\n",day.year,day.month,day.day);
    printf("Address of today is %p\n",Date);
    return 0;
}
