#include<iostream>
using namespace std;
int main()
{
    int a=7,b=5;
    float x1,x2,x3;
    x1=(float)a/b;
    x2=float(a/b);
    x3=a/b;
    cout<<x1<<'\t'<<x2<<'\t'<<x3<<endl;
    return 0;
}
