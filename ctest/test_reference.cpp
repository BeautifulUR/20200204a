#include<stdio.h>
void f1(int x)       //��ֵ
{
    //printf("f1(int x)_before _x=%d\n",x);
    ++x;
    //printf("f1(int x)_after_x=%d\n",x);
}
void f2(int &x)     //���� C++д��
{
    ++x;
}
void f3(int *x)    //ָ�봫ֵ
{
    printf("f3(int *x)_before_x=%d\n",x);
    printf("f3(int *x)_before_*x=%d\n",*x);
    ++x;
    printf("f3(int *x)_after_x=%d\n",x);
    printf("f3(int *x)_after_*x=%d\n",*x);
}
void f4(int *&x)     //ָ������
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
    printf("main�����е���f3ǰ*p=%d,\ta=%d\n",*p,a);
    printf("main�����е���f3ǰp=%d\n",p);
    f3(p);
    printf("main�����е���f3��*p=%d,\ta=%d\n",*p,a);
    printf("main�����е���f3��p=%d\n",p);
    printf("\n");
    printf("main�����е���f4ǰ*p=%d,\ta=%d\n",*p,a);
    printf("main�����е���f4ǰp=%d\n",p);
    f4(p);
    printf("main�����е���f4��*p=%d,\ta=%d\n",*p,a);
    printf("main�����е���f4��p=%d\n",p);
    printf("\n");
    return 0;
}
