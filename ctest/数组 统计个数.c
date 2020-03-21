#include<stdio.h>
int main()
{
    int x;
    const int num=10;//数组大小
    int cnt[num];
    int i;
    for(i=0;i<num;i++)
    {
        cnt[i]=0;
    }
    printf("输入数据\n");
    scanf("%d",&x);
   while(x!=-1){
        if(x>=0&&x<10){
            cnt[x]++;
            }
            scanf("%d",&x);
    }
    for(i=0;i<num;i++){
        printf("%d:%d\n",i,cnt[i]);
    }
    return 0;
}
