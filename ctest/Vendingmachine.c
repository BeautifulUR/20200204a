#include<stdio.h>
#include<math.h>
int main()
{
    float balance=0.0;
    float amount=0.0;
    int i=0;
    while(1)
    {
        printf("请投币\n");
        scanf("%f",&amount);
        balance+=amount;
        if(balance-1.5>=0)
        {
            rbegin:
            printf("**************\n");
            printf("请选择饮料类型\n");
            printf("1.可乐\n");
            printf("2.雪碧\n");
            printf("3.红茶\n");
            printf("**************\n");
            scanf("%d",&i);
            switch(i)
            {
                case 1:printf("请取走您的可乐\n");break;
                case 2:printf("请取走您的雪碧\n");break;
                case 3:printf("请取走您的红茶\n");break;
                default:{
                            printf("出错了,请重新选择！\n");
                            goto rbegin;
                            break;
                        }
            }
            printf("找零%1.1f元\n",balance-1.5);
            balance=0;
        }
    }

}
