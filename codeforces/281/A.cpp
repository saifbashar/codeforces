#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[1000];
	scanf("%s", s);
	printf("%c",toupper(s[0]));
	for(int i=1;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
	
	return 0;
}
