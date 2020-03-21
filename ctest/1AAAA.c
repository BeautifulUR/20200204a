#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4};
    int *p=a;
    printf("sizeof a[0]=%d\n",sizeof(a[0]));
    printf("sizeof a[1]=%d\n",sizeof(a[1]));
    printf("sizeof a=%d\n",sizeof(a));
    printf("sizeof *a=%d\n",sizeof(*a));
    printf("sizeof *p=%d\n",sizeof(*p));
    printf("sizeof p[0]=%d\n",p[0]);
    return 0;
}
