#include<stdio.h>
int main()
{
    int x,n=0;
    printf("����һ������\n");
    scanf("%d",&x);
    do{
        n++;
        x/=10;
    }while(x>0);
    /*{
        n++;
        x/=10;
    }*/
    printf("%d",n);
    return 0;
}
