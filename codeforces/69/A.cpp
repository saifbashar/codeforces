#include<stdio.h>
int main()
{
	int n,j,i;
	scanf("%d", &n);
	int s[n][3],sum1=0,sum2=0,sum3=0;
	for (i=0;i<n;i++)
	{
	 scanf("%d %d %d", &s[i][0], &s[i][1], &s[i][2]);
	}

	for(i=0;i<n;i++)
	{
		sum1 += s[i][0];
		sum2 += s[i][1];
		sum3 += s[i][2];

	}

		if(sum1==0 && sum2==0 && sum3==0)
		{
			printf("YES");

		}
		else
		{
			printf("NO");
		}
		return 0;

}
