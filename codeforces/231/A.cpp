#include<stdio.h>
int main()
{
	int n,count=0,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a>1 || b>1 || c>1 || a<0 || b<0 || c<0)
		{
			return 0;
		}
		else
		{
			if(a+b+c>=2)
			{
				count++;
			}
		}
		
	}
	printf("%d",count);
	return 0;
}
