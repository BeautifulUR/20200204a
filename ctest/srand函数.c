#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int a[10][10];
      for(int i=0;i<5;i++)
         for(int j=0;j<5;j++)
           {
            srand((unsigned int)time(NULL));
            rand()%100+1;
           }    //产生1~100的随机数
            printf(%d/n,a[1][1]);
    return 0;
}
