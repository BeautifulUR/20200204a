#include<stdio.h>
int main()
{
    int t1,t2;
    int num,mask=1;
    scanf("%d",&num);
    t2=num;
    while(t2>9)
    {
      t2/=10;
      mask*=10;
    }
    printf("mask=%d\n",mask);
    do
    {
      t1=num/mask; //������λ
      printf("%d",t1);
      if(mask>9)
      {
        printf(" ");
      }
      num%=mask;  //ȥ�����λ
      mask/=10;
    }while(mask>0);
    printf("\n");
    return 0;
}
