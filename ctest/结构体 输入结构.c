#include<stdio.h>

struct point{
  int x;
  int y;
};

struct point getstruct(void);
void output(struct point);

int main(int argc,char const *argv)
{
    struct point i={0,0};
    i=getstruct();
    output(i);
    return 0;
}

struct point getstruct(void)
{
    struct point p;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    return p;
}

void output(struct point p)
{
    printf("%d %d\n",p.x,p.y);
}
