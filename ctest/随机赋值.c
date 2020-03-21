#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int i,j,t,a[10][10];
      srand((unsigned)time(NULL));
      printf("原数组为:\n");
    for(i=0;i<5;i++)
    {
        if(i%1==0)
            printf("\n");
        for(j=0;j<5;j++)
           {
            a[i][j]=rand()%100+1;
            printf("%5d",a[i][j]);
           }
    }
    printf("\n");
    for(i=0;i<3;i++)
        for(j=0;j<3-i;j++)
          if(a[j][j]<a[j+1][j+1])
           {
               t=a[j][j];a[j][j]=a[j+1][j+1];a[j][j]=t;
           }
    printf("排序后数组为:");
    for(i=0;i<5;i++)
    {
        if(i%1==0)
               printf("\n");
        for(j=0;j<5;j++)
           printf("%5d",a[i][j]);
    }
    printf("\n");
    return 0;
}
