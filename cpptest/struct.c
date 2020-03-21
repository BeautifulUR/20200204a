#include<stdio.h>
struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    date today={2018,9,7};
    printf("%d\t%d\t%d\n",today.year,today.month,today.day);
    return 0;
}
