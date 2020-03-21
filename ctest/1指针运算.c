#include<stdio.h>
int main()
{
    int i=1;
    int j=2;
    char k=48;
    int *p=&i;
    int *q=&j;
    char *r=&k;

    printf("%d\t",*p);printf("%p\t",p);printf("%d\n",p);
    printf("%d\t",*q);printf("%p\t",q);printf("%d\n",q);
    printf("%c\t",*r);printf("%p\t",r);printf("%d\n",r);

    printf("%d\n",sizeof(*p));
    printf("%d\n",sizeof(*q));
    printf("%d\n",sizeof(*r));

    return 0;
}
