#include<iostream>
#include<iomanip>
using namespace std;
const int n = 100;
int main()
{
	int array[n], i, j;
	for (i = 0; i < 100; i++) //赋值
		array[i] = i + 1;
	array[0] = 0;
	for (i = 1; i < n; i++)
	{
		if (array[i] == 0)
			continue;
		for (j = i + 1; j < n; j++)
			if (array[j] % array[i] == 0)
				array[j] = 0;
	}
	int count = 0;
	cout << "1~" << n << "之间的素数：" << endl;
	for(i=0;i<n;i++)
		if(array[i]!=0)
		{
			cout << setw(5) << array[i];
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
	cout << endl;
	return 0;
}
