#include<stdio.h>
enum color {red,yellow,blue};

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
