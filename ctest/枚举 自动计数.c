#include<stdio.h>
enum color {red,yellow,blue,numcolors};

int main(int argc,char const *argv[])
{
    int color=-1;
    char *Colornames[numcolors]={"red","yellow","blue",};
    char *colorname=NULL;
    printf("������ɫ����:\n");
    scanf("%d",&color);
    if(color>=0&&color<numcolors){
        colorname=Colornames[color];
    }else{
        colorname="unknown";
    }
    printf("��ϲ������ɫ��%s\n",colorname);
    return 0;
}
