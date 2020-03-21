#include<stdio.h>
int main()
{
    int a,n;
    int sum=0;
    scanf("%d %d",&a,&n);
    int i;
    int t=0;
    for(i=0;i<n;i++)
    {
        t=t*10+a;
        sum+=t;
    }
    printf("%d\n",sum);
    return 0;
}
