#include<stdio.h>
int main()
{
    int num,digit;
    int res=0;
    printf("输入一个整数\n");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        printf("%d",digit); // 100 ->001
        //res=res*10+digit;  // 100 ->1
        num/=10;
    }
    //printf("%d\n",res);
    return 0;
}
