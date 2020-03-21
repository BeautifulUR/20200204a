#include<stdio.h>
int main()
{
    int num;
    int isprime=1;
    printf("输入一个整数\n");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
            isprime=0;
            break;
        }
    } //bug认为1是素数
    if(isprime==1&&num!=1)
        printf("%d是素数\n",num);
    else
        printf("%d不是素数\n",num);
    return 0;
}
