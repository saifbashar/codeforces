#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld", &n, &k);
    if(n%2==0)
    {
        if(k<=(n/2))
        {
            printf("%lld",((2*k)-1));
        }
        else
        {
            printf("%lld",((k-(n/2))*2));
        }

    }
    else
    {
        if(k<=((n+1)/2))
        {
            printf("%lld",((2*k)-1));
        }
        else
        {
            printf("%lld",((k-((n+1)/2))*2));
        }
    }
    return 0;
}
