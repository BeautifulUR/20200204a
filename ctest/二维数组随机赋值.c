#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,a[10][10];
    srand((unsigned)time(NULL));
      for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            a[i][j]=rand()%100;
      for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
         if(i%5==0)
           printf("\n");
           printf("%d",a[i][j]);
        }
    return 0;
}
