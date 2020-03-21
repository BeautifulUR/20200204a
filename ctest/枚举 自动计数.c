#include<stdio.h>
enum color {red,yellow,blue,numcolors};

int main(int argc,char const *argv[])
{
    int color=-1;
    char *Colornames[numcolors]={"red","yellow","blue",};
    char *colorname=NULL;
    printf("输入颜色代码:\n");
    scanf("%d",&color);
    if(color>=0&&color<numcolors){
        colorname=Colornames[color];
    }else{
        colorname="unknown";
    }
    printf("你喜欢的颜色是%s\n",colorname);
    return 0;
}
