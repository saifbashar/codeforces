#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='o'||tolower(s[i])=='i'||tolower(s[i])=='u'||tolower(s[i])=='y')
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
