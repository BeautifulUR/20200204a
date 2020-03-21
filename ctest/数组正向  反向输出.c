#include<stdio.h>
#include<string.h>
void fun(char *s,char *t)
{
    int i,sl;
    sl=strlen(s);
    for(i=0;i<sl;i++)
        t[i]=s[sl-(i+1)];
    for(i=0;i<sl;i++)
        t[sl+i]=s[i];
    t[sl*2]='\0';
}
int main( )
{
   char s[100],t[100];
   scanf("%s",s);
   fun(s,t);
   printf("%s",t);
   return 0;
}
