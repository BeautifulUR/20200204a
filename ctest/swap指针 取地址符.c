#include<stdio.h>
int swap(int *p1,int *p2)
{
    int *p;
    *p=*p1;*p1=*p2;*p2=*p;
    //p=p1; p1=p2; p2=p;
}

int main()
{
    int a=5,b=7;
    int ptr1=a; //<=>int ptr1=5;
    int *ptr2=&a;
    printf("%d\t %p\n",a,&a);
    printf("%d\t %p\n",ptr1,&ptr1);
    printf("%d\t %p\t %d\n",ptr2,ptr2,*ptr2);
    printf("%d\t %d\n",a,b);
    swap(&a,&b);
    printf("%d\t %d\n",a,b);
    return 0;
}
