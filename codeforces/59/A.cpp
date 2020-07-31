#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[101];
	scanf("%[^\n]", s);
	int x,i,up=0,down=0;
	for(i=0;i<strlen(s);i++)
	{
		x=(int)s[i];
		if( x>=65 && x<=90 )
	{
			up++;
		}
		else
		{
			down++;
		}
	}
	if(up>down)
	{
		for(i=0;i<strlen(s);i++)
		{
			printf("%c", toupper(s[i]));
		}
		
	}
	else
	{
		for(i=0;i<strlen(s);i++)
		{
			printf("%c", tolower(s[i]));
		}
		
	
	}
	return 0;
	
}
