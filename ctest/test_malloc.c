#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numb;
    int i;
    int *a;
    printf("输入数据个数\n");
    scanf("%d",&numb);
    a=(int*)malloc(numb*sizeof(int));
    for(i=0;i<numb;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=numb-1;i>=0;i--)
    {
        printf("%2.0d ",a[i]);
        if(i%5==0){
            printf("\n");
        }
    }
    free(a);
    printf("\n");
    return 0;
}
