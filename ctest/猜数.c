#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int count=0,a=0;
    srand(time(0));
    int num=rand()%100+1;
    printf("开始游戏\n");
    do
    {
      printf("猜猜这个0~100的数\n");
      scanf("%d",&a);
      count++;
      if(a<num)
      {
          printf("你猜小了\n");
      }else if(a>num){
          printf("你猜大了\n");
      }
    }while(a!=num);
    printf("你猜对了\n");
    return 0;
}
