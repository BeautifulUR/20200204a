#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int exit=0;
    int one,two,five;
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/5;five++){
            if(one+two*2+five*5==x*10){
                printf("可以用%d个一角%d个两角%d个五角凑成%d元\n",one,two,five,x);
                exit=1;
                break;//接力breaks
                //goto out;
                }
            }
            if(exit) break;
        }
       if(exit) break;
    }
    //out:
    return 0;
}
