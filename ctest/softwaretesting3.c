#include<stdio.h>
void work(int x,int y,int z)
{
    int k=0,j=0;
    if((x>3)&&(z<10))
    {
        k=x*y-1;
        j=k-z;
    }
    printf("After first if\tk=%d\tj=%d\n",k,j);
    if((x==4)||(y>5))
    {
        j=x*y+10;
    }
    j=j%3;
    printf("After second if\tk=%d\tj=%d\n",k,j);
}

int main()
{
    int x,y,z;
    while(1)
    {
        scanf("%d" "%d" "%d",&x,&y,&z);
        work(x,y,z);
    }
    return 0;
}
