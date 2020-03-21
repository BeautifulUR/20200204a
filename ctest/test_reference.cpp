#include<stdio.h>
void f1(int x)       //传值
{
    //printf("f1(int x)_before _x=%d\n",x);
    ++x;
    //printf("f1(int x)_after_x=%d\n",x);
}
void f2(int &x)     //引用 C++写法
{
    ++x;
}
void f3(int *x)    //指针传值
{
    printf("f3(int *x)_before_x=%d\n",x);
    printf("f3(int *x)_before_*x=%d\n",*x);
    ++x;
    printf("f3(int *x)_after_x=%d\n",x);
    printf("f3(int *x)_after_*x=%d\n",*x);
}
void f4(int *&x)     //指针引用
{
    printf("f4(int *&x)_before_x=%d\n",x);
    printf("f4(int *&x)_before_*x=%d\n",*x);
    ++x;
    printf("f4(int *&x)_after_x=%d\n",x);
    printf("f4(int *&x)_after_*x=%d\n",*x);
}

int main()
{
    int a=1024;
    int *p;
    p=&a;

    f1(a);
    printf("main_f1_a=%d\n",a);
    printf("\n");
    f2(a);
    printf("main_f2_a=%d\n",a);
    printf("\n");
    printf("main方法中调用f3前*p=%d,\ta=%d\n",*p,a);
    printf("main方法中调用f3前p=%d\n",p);
    f3(p);
    printf("main方法中调用f3后*p=%d,\ta=%d\n",*p,a);
    printf("main方法中调用f3后p=%d\n",p);
    printf("\n");
    printf("main方法中调用f4前*p=%d,\ta=%d\n",*p,a);
    printf("main方法中调用f4前p=%d\n",p);
    f4(p);
    printf("main方法中调用f4后*p=%d,\ta=%d\n",*p,a);
    printf("main方法中调用f4后p=%d\n",p);
    printf("\n");
    return 0;
}
