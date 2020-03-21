#include<stdio.h>
int triangle(int a,int b,int c)
{
    if(a==b&&b==c)   //直角a*a+b*b==c*c
        return 3;
    else if((a==b)||(a==c)||(b==c))
            return 2;
         else return 1;
}

int main()
{
    int a,b,c;
    int d;
    rbegin:scanf("%d %d %d",&a,&b,&c);
    if(a<1||a>100||b<1||b>100||c<1||c>100){
        printf("无效输入\n");
        goto rbegin;
    }
    while((a>=1&&a<=100)&&(b>=1&&b<=100)&&(c>=1&&c<=100)){
            if((b+c>a)&&(a+c>b)&&(a+b>c)){
                d=triangle(a,b,c);
                if(d==3)
                    printf("a,b,c构成一个等边三角形\n");
                else if(d==2)
                    printf("a,b,c构成一个等腰三角形\n");
                     else printf("a,b,c构成一个一般三角形\n");
            }else{
                printf("a,b,c构不成一个三角形\n");
            }
        scanf("%d %d %d",&a,&b,&c);
        if(a<1||a>100||b<1||b>100||c<1||c>100)
        {
            printf("无效输入\n");
            goto rbegin;
        }
    }
}


