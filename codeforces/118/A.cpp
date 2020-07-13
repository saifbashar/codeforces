#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(tolower(s[i])=='a' || tolower(s[i])=='o' || tolower(s[i])=='y' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='u' )
		{
		 continue;
		}
		else
		{
			printf(".%c",tolower(s[i]));
		}
	}
	return 0;
}
