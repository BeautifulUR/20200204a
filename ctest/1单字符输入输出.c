#include<stdio.h>
int main(int argc,char const *argv[])
{
    char ch;
    while((ch=getchar())!=EOF){
        putchar(ch);
    }
    printf("EOF\n");//WINDOWS Ctrl-Z   UNIX Ctrl-D
    return 0;
}
