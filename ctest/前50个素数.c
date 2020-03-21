#include<stdio.h>
int main()
{
    int i,j;
    int count=0;
    for(j=1;count<50;j++){
       int isprime=1;
       for(i=2;i<j;i++){
            if(j%i==0){
                isprime=0;
                break;
            }
        }
       if(isprime==1&&j!=1){
         printf("%d\t",j);
         count++;
            if(count%5==0){
                printf("\n");
                }
       }
    }
    return 0;
}
