#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p=0;
    int cnt=0;
    while((p=malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("maximum malloc size = %d00MB\n",cnt);
    return 0;
}
