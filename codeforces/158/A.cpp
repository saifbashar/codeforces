#include<stdio.h>
int main()
{
	int n,t,a[50],i,count=0;
	scanf("%d%d",&n,&t);
	t=t-1;

		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(a[t] ==0)
		{
			for(i=0;i<n;i++)
			{
				if(a[i]>a[t])
				{
					count++;
				}
			}
			printf("%d",count);
			return 0;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[t]<=a[i])
				{
					count++;
				}
			}
			printf("%d",count);
		}

	return 0;

}
