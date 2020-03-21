#include<stdio.h>

int str(char *ch)
{
    int len=0;
    char *c=ch;
    printf("In str %d\t",c);
    printf("%c\n",*c);
    while(*c)
    {
        ++len;
        ++c;
    }
    printf("In str %d\t",c);
    printf("%c\n",*c);
    return len;
}

int main()
{
    int a=str("cur input");
    printf("%d\n",a);
}
