#include<stdio.h>
int main()
{
    int num;
    int isprime=1;
    printf("����һ������\n");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
            isprime=0;
            break;
        }
    } //bug��Ϊ1������
    if(isprime==1&&num!=1)
        printf("%d������\n",num);
    else
        printf("%d��������\n",num);
    return 0;
}
