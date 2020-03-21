#include<stdio.h>
int main()
{
    int m,n;
    int i,j;
    int cnt=0;
    int sum=0;
    printf("输入两个整数\n");
    scanf("%d %d",&m,&n);
    if(m==1){
        m=2;
    }
    for(i=m;i<n;i++)
    {
        int isprime=1;
        for(j=2;j<i-1;j++)
        {
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            cnt++;
            sum+=i;
        }
    }
    printf("%d\t%d\n",cnt,sum);
    return 0;
}
