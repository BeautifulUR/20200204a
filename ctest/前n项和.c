#include<stdio.h>
int main()
{
    int n,i;
    double sign=1; // + - + -
    double sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=sign/i;
        sign=-sign;
    }
    printf("f(%d)=%f\n",n,sum);
    return 0;
}
