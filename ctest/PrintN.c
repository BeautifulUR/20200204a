#include<stdio.h>
#include<time.h>
void PrintND(int N)
{
	if(N)
	{
		PrintND(N-1);
		printf("%d\t",N);//递归实现
	}
}

void PrintNS(int N)
{
	int i;
	for (i = 1; i <= N; i++)
		printf("%d\t",i);//顺序实现
}


int main()
{
    int N;
    scanf("%d",&N);
	clock_t start,stop;
	double duration;

	start = clock();
	PrintNS(N);
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("\n");
	printf("durantionS=%f\n",duration);

	start = clock();
	PrintND(N);
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("\n");
	printf("durantionD=%f\n",duration);
	return 0;
}
