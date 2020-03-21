#include<stdio.h>
int search(int key,int a[],int length)
{
    int ret=-1;
    int i;
    for(i=0;i<length;i++)
    {
       if(a[i]==key)
       {
           ret=i;
           break;
       }
    }
    return ret;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,9,11,13,14,23,32,};
    int x;
    int loc;
    printf("输入\n");
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc!=-1)
    {
        printf("%d在第%d个位置上",x,loc);
    }else{
        printf("%d不存在",x);
    }
    return 0;
}
