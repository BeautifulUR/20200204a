#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2, s3;
    s1 = "first";
    s2 = "second";
    s3 = s1 + s2;
    cout<< s3 <<endl;
    s2 += s1;
    cout<< s2 <<endl;
    s1 += "third";
    cout<< s1 <<endl;
    s1 += 'a';
    cout<< s1 <<endl;
    return 0;
}
