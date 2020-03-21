#include<stdio.h>
int main()
{
    int n;
    int res=1;
    printf("输入n!(n为整数)\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        res*=i;
    }
    printf("%d\n",res);
    return 0;
}
