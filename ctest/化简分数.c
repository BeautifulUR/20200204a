#include<stdio.h>
int main()
{
    int dividend,divisor;
    int a,b,t;
    printf("ÊäÈëa/b\n");
    scanf("%d/%d",&dividend,&divisor);
    a=dividend;
    b=divisor;
    while(b>0)
    {
       t=a%b;
       a=b;
       b=t;
    }
    printf("%d\n",sizeof(long long int));
    printf("%d/%d\n",dividend/a,divisor/a);
    return 0;
}
