#include<stdio.h>
int main()
{
    int n;
    int res=1;
    printf("����n!(nΪ����)\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        res*=i;
    }
    printf("%d\n",res);
    return 0;
}
