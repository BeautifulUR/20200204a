#include<stdio.h>
#include<math.h>
int main()
{
    float balance=0.0;
    float amount=0.0;
    int i=0;
    while(1)
    {
        printf("��Ͷ��\n");
        scanf("%f",&amount);
        balance+=amount;
        if(balance-1.5>=0)
        {
            rbegin:
            printf("**************\n");
            printf("��ѡ����������\n");
            printf("1.����\n");
            printf("2.ѩ��\n");
            printf("3.���\n");
            printf("**************\n");
            scanf("%d",&i);
            switch(i)
            {
                case 1:printf("��ȡ�����Ŀ���\n");break;
                case 2:printf("��ȡ������ѩ��\n");break;
                case 3:printf("��ȡ�����ĺ��\n");break;
                default:{
                            printf("������,������ѡ��\n");
                            goto rbegin;
                            break;
                        }
            }
            printf("����%1.1fԪ\n",balance-1.5);
            balance=0;
        }
    }

}
