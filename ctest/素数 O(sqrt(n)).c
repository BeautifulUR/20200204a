#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    int ret=1;
    int i;
    if(x==1||(x%2==0&&x!=2)){
        ret=0;
    }
    for(i=3;i<sqrt(x);i+=3)
    {
        if(x%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}

int main()
{
    int num;
    printf("����һ������\n");
    scanf("%d",&num);
    if(isprime(num)){
        printf("%d������",num);
    }else{
        printf("%d��������",num);
    }
    return 0;
}
