#include<stdio.h>
int main()
{
    int u,v,temp;
    scanf("%d %d",&u,&v);
    while(v!=0)
    {
        temp=u%v;
        u=v;
        v=temp;
    }
    printf("gcd=%d",u);
    return 0;
}
