#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,d;
    char s[100];
    
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s", s);
        l=strlen(s);
        d=l-2;
        if(l<=10)
        {
            printf(s);
            printf("\n");
        }
        else
        {
            printf("%c",s[0]);
            printf("%d",d);
            printf("%c",s[l-1]);
            printf("\n");
        }
    }
    return 0;
}
