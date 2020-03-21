#include<stdio.h>

struct point{
  int x;
  int y;
};

struct point *getstruct(struct point*);
void output(struct point);
void print(const struct point *p);

int main(int argc,char const *argv[])
{
    struct point i={0,0};
    getstruct(&i);
    output(i);
    //output(*getstruct(&i));
    print(getstruct(&i));
    return 0;
}

struct point *getstruct(struct point *p)
{
    scanf("%d",&p->x);
    scanf("%d",&p->y);
    return p;
}

void output(struct point p)
{
    printf("output %d %d\n",p.x,p.y);
}

void print(const struct point *p)
{
   printf("print %d %d\n",p->x,p->y);
}
