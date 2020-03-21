#include<stdio.h>

const int red=0;
const int yellow=1;
const int blue=2;

int main(int argc,char const *argv[])
{
    int color=-1;
    char *colorname=NULL;
    printf("输入颜色代码:\n");
    scanf("%d",&color);
    switch(color){
        case red:colorname="red";break;
        case yellow:colorname="yellow";break;
        case blue:colorname="blue";break;
        default:colorname="unknown";break;
    }
    printf("你喜欢的颜色是%s\n",colorname);
    return 0;
}
