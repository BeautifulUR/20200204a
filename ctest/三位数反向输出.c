#include<stdio.h>
int main()
{
    int a,a1,g,s,b;
    printf("����һ����λ��:\n");
    scanf("%d",&a);
    g=a%10;
    s=a/10%10;
    b=a/100;
    a1=g*100+s*10+b;
    printf("%d",a1);
    return 0;
}
