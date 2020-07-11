#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i=0,j;
    j = strlen(s);
    while(i<j)
    
    {
        if(tolower(s[i]) == 'a')
        {
        i++;
        }
        else if (tolower(s[i]) == 'e') 
        {
           i++;
        }
        else if (tolower(s[i]) == 'i') 
        {
           i++;
        }
        else if (tolower(s[i]) == 'o') 
        {
           i++;
        }
         else if (tolower(s[i]) == 'u') 
        {
           i++;
        }
        else if (tolower(s[i]) == 'y')
        {
            i++;
        }
        
        else{
            printf(".%c",tolower(s[i]));
            i++;
        }
       
    }
    return 0;
}