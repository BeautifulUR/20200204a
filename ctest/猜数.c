#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int count=0,a=0;
    srand(time(0));
    int num=rand()%100+1;
    printf("��ʼ��Ϸ\n");
    do
    {
      printf("�²����0~100����\n");
      scanf("%d",&a);
      count++;
      if(a<num)
      {
          printf("���С��\n");
      }else if(a>num){
          printf("��´���\n");
      }
    }while(a!=num);
    printf("��¶���\n");
    return 0;
}
