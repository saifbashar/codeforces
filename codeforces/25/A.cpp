#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i,ev=0,od=0,a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            od++;
        }
        else
        {
            ev++;
        }
    }
    if(od>ev)
    {
        for(i=0;i<t;i++)
        {
            if(a[i]%2!=0)
            {
                printf("%d", i+1);
                break;
            }
        }
    }
    else
    {
        for(i=0;i<t;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d", i+1);
                break;
            }
        }
    }
    return 0;
}
