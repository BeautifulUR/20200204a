#include<stdio.h>
int main()
{
    int x,y;
    int x1,x2;
    int n=1;
    printf("input a number:\n");
    scanf("%d",&x);
    x1=x;
    do{
        printf("%d",x1%10);
        x1/=10;
    }while(x1>0);
    return 0;
}
