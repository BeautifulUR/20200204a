#include<stdio.h>
#include<math.h>
int main()
{
    int a=5;
    int b=4;
    float c=5.0;
    float d=4.0;
    printf("%d\n",a-b);
    printf("%f\n",c-d);
    printf("abs=%d\n",abs(b-a));
    if(fabs(c-5)<=1e-6)
    {
        printf("fabs=%f\n",fabs(d-c));
    }
    return 0;
}
