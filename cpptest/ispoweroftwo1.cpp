#include<iostream>
using namespace std;
class Solution{
public:
    int isPowerOfTwo(int n){
        return (n>0)&&(!(n&(n-1)));
    }
};
int main()
{
    int i,n;
    Solution B;
    cin>>n;
    i=B.isPowerOfTwo(n);
    cout<<i<<endl;
    return 0;
}
