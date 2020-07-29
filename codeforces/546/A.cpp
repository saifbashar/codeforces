#include<stdio.h>
int main()
{

	long int k,n,w;
	scanf("%ld%ld%ld", &k, &n, &w);
	long int sum =0;
	for(long int i=1;i<=w;i++)
	{
		sum += i*k;
	}
	if(sum<=n)
	{
		printf("0");

	}
	else
	{
		printf("%ld", sum-n);
	}
	return 0;
}
