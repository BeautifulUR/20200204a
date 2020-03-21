#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,a[10];
     srand((unsigned)time(NULL));
     for(i=0;i<10;i++)
        {
         a[i]=rand();// 10¸öËæ»úÊý
         printf("%d\n",a[i]);
        }
    return 0;
}
