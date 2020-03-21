#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10]={'a','b','c','d','e','f','g','h','i'};
    cout<<a<<'\t'<<strlen(a)<<endl;
    char b[ ]="abcdefghi";
    cout<<b<<'\t'<<strlen(b)<<endl;
    cin.getline(a,10);
    cout<<a<<'\t'<<strlen(a)<<endl;
    return 0;
}
