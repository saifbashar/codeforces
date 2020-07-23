#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,a=0;
	char n[100];
	scanf("%s", n);
	
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]=='1')
		{
			a=0;
			count++;
			if(count==7)
			{
				printf("YES");
				return 0;
			}
		}
		else
		{
			count=0;
			a++;
			if(a==7)
			{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
