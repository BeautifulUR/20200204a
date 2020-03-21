#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i++<10;)
        printf("%d\t",i);
    printf("%d\n",i);
    for(j=0;j<10;++j)
        printf("%d\t",j);
    printf("%d\n",j);
     for(k=10;k>1;k/=2)
        printf("%d\t",k++);
    printf("%d\n",k);
    return 0;
}
