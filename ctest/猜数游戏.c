#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    int cnt=0;
    int finshed=0;
    int inp;
    do
    {
        scanf("%d",&inp);
        cnt++;
        if(inp<0)
        {
            printf("Game Over\n");
            break;
        }else if(inp<num)
        {
            printf("Too small\n");
        }else if(inp>num)
        {
            printf("Too big\n");
        }else{
            if(cnt==1){
                printf("Bingo\n");
            }else if(cnt<+3){
                printf("Lucky you\n");
            }else{
                printf("Good guess\n");
            }
            finshed=1;
        if(cnt==n&&!finshed)
         {
           printf("Game Over\n");
           finshed=1;
         }
        }
    }while(!finshed);
    return 0;
}
