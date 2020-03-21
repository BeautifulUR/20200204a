#include<stdio.h>
int f(const int *p);
int main()
{
    int a=10;
    //const int *p=a;
    printf("before=%d\n",a);
    f(&a);
    printf("after=%d\n",a);
    return 0;
}

int f(const int *p)
{
    *p=11;
}
