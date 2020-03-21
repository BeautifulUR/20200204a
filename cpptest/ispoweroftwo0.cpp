#include<iostream>
using namespace std;
class Solution{
public:
    int isPowerOfTwo(int n)
    {
        int cnt=0;
        while(n>0)
        {
            cnt+=(n&1);
            n>>=1;
        }
        return cnt==1;
    }
    int numericOfOne(int n)
    {
        int cnt=0;
        while(n>0)
        {
            cnt+=(n&1);
            n>>=1;
        }
        return cnt;
    }
};

int main()
{
    int i,n;
    cin>>n;
    Solution A;
    i=A.isPowerOfTwo(n);
    if(i==1)
        cout<<i;
    else
    {
        i=A.numericOfOne(n);
        cout<<i;
    }
    return 0;
}
