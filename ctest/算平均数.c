#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int count=0;
    printf("��������(����)\n");
    scanf("%d",&num);
    while(num!=-1){
        sum+=num;
        count++;
        scanf("%d",&num);
    }
    printf("%1.2f\n",1.0*sum/count);
    return 0;
}
