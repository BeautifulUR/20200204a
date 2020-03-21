#include<stdio.h>
void f()
{
    char s1[8];
    char s2[8];
    scanf("%7s",s1);
    scanf("%7s",s2);
    printf("s1=%s¡£\n",s1);
    printf("s2=%s¡£\n",s2);
    printf("s1[7]=%c\n",s1[7]);
}

int main()
{
   f();
   return 0;
}
